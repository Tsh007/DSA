//
//  26_print_LCS.cpp
//  combinedDsa
//
//  Created by Tejash Singh on 02/08/25.
//

#include "bits/stdc++.h"

using namespace std;

class Solution{
    string customFunc(string &s1,string &s2,int i,int j){
        
        if(i<0 || j<0)return "";
        
        if(s1[i] == s2[j])return s1[i] + customFunc(s1,s2,i-1,j-1);
        
        string left = customFunc(s1, s2, i-1, j);
        string right = customFunc(s1, s2, i, j-1);
        
        if(left.size() > right.size())return left;
        return right;
    }
public:
    string findLCS(int n, int m,string &s1, string &s2){
        string ans = customFunc(s1, s2, n-1, m-1);
        
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
};

//recursion + memo + shifting origin
class Solution1{
    string customFunc(string &s1,string &s2,int i,int j, vector<vector<string>>& dp){
        
        if(i==0 || j==0)return "";
        
        if(dp[i][j] != "-")return dp[i][j];
        
        if(s1[i-1] == s2[j-1])return dp[i][j] = s1[i-1] + customFunc(s1,s2,i-1,j-1,dp);
        
        string left = customFunc(s1, s2, i-1, j, dp);
        string right = customFunc(s1, s2, i, j-1, dp);
        
        if(left.size() > right.size())return dp[i][j] = left;
        return dp[i][j] = right;
    }
public:
    string findLCS(int n, int m,string &s1, string &s2){
        
        vector<vector<string>>dp(s1.length()+1,vector<string>(s2.length()+1,"-"));
        
        string ans = customFunc(s1, s2, n, m, dp);
        
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
};


//tabulation + origin shift
class Solution2{
public:
    string findLCS(int n, int m,string &s1, string &s2){
        
        vector<vector<string>>dp(s1.length()+1,vector<string>(s2.length()+1,""));
        
        for(int i = 1;i<=n;i++){
            for(int j = 1; j<=m ; j++){
                if(s1[i-1] == s2[j-1]){
                    dp[i][j] = s1[i-1] + dp[i-1][j-1];
                }else{
                    string left = dp[i-1][j];
                    string right = dp[i][j-1];
                    
                    if(left.size() > right.size())dp[i][j] = left;
                    else dp[i][j] = right;
                }
            }
        }
        string ans = dp[n][m];
        
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
};


//space optimization
class Solution3{
public:
    string findLCS(int n, int m,string &s1, string &s2){
        
        vector<string>prev(s2.length()+1,""),curr(s2.length()+1,"");
        
        for(int i = 1;i<=n;i++){
            for(int j = 1; j<=m ; j++){
                if(s1[i-1] == s2[j-1]){
                    curr[j] = s1[i-1] + prev[j-1];
                }else{
                    string left = prev[j];
                    string right = curr[j-1];
                    
                    if(left.size() > right.size())curr[j] = left;
                    else curr[j] = right;
                }
            }
            prev = curr;
        }
        string ans = prev[m];
        
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
};

int main(){
    
    string s1 = "xyz";
    string s2 = "abc";
    
    s1 = "ababa";
    s2 = "cbbcad";
    
    Solution3 sol;
    
    cout<<sol.findLCS(s1.length(),s2.length(),s1,s2)<<endl;
    
    return 0;
}
