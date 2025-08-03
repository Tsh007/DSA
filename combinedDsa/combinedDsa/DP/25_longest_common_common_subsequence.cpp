////
////  25_longest_common_common_subsequence.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 01/08/25.
////
//
//#include "bits/stdc++.h"
//
//using namespace std;
//
////my recursion + memo below then tabulation then space optimization
////my code is bit longer as much long base case instead prefer striver's code for recursion , tabulation , space optimzation
//
////recursive + memo
////ignore
//class Solution {
//    int customFunc(string s1,string s2,int idx1,int idx2, vector<vector<int>>& dp){
//        
//        if(idx1 == 0 || idx2 == 0){
//            if(idx1 == 0 && idx2 == 0)return s1[0] == s2[0];
//            
//            if(idx1 == 0){
//                while(idx2>=0){
//                    if(s2[idx2] == s1[idx1])return 1;
//                    idx2--;
//                }
//                return 0;
//            }
//            if(idx2 == 0){
//                while(idx1>=0){
//                    if(s2[idx2] == s1[idx1])return 1;
//                    idx1--;
//                }
//                return 0;
//            }
//            return 0;
//        }
//        if(dp[idx1][idx2] != -1)return dp[idx1][idx2];
//        if(s1[idx1] == s2[idx2]){
//            //match
//            return  dp[idx1][idx2] = 1 + customFunc(s1,s2,idx1-1,idx2-1, dp);
//        }
//        //notMatch
//        return dp[idx1][idx2] = max(customFunc(s1,s2,idx1-1,idx2, dp),customFunc(s1,s2,idx1,idx2-1, dp));
//    }
//public:
//    int longestCommonSubsequence(string s1, string s2) {
//        vector<vector<int>>dp(s1.length(),vector<int>(s2.length(),-1));
//        int ans = customFunc(s1, s2, s1.length()-1, s2.length()-1, dp);
////        for(auto i : dp){
////            for(auto k : i){
////                cout<<k<<" ";
////            }
////            cout<<endl;
////        }
//        
//        return ans;
//    }
//};
//
////tabulation -- recursive + memo gives MLE on leetcode
//class Solution1 {
//public:
//    int longestCommonSubsequence(string s1, string s2) {
//        
//        vector<vector<int>>dp(s1.length(),vector<int>(s2.length(),0));
//        
//        if(s1[0] == s2[0])dp[0][0] = 1;
//        
//        for(int i = 1; i<s1.length() ; i++){
//            if(s2[0] == s1[i])dp[i][0] = 1;
//            else dp[i][0] = dp[i-1][0];
//        }
//        
//        for(int k = 1; k<s2.length() ; k++){
//            if(s1[0] == s2[k])dp[0][k] = 1;
//            else dp[0][k] = dp[0][k-1];
//        }
//        
////        if(s1[0] == s2[0])dp[0][0] = 1;
//        
//        for(int i = 1; i<s1.length(); i++){
//            for(int k = 1; k<s2.length() ; k++){
//                
//                if(s1[i] == s2[k]){
//                    dp[i][k] = 1 + dp[i-1][k-1];
//                }else{
//                    dp[i][k] = max(dp[i-1][k],dp[i][k-1]);
//                }
//            }
//        }
//        
////        for(auto i : dp){
////            for(auto k : i){
////                cout<<k<<" ";
////            }
////            cout<<endl;
////        }
//        
//        return dp[s1.length()-1][s2.length()-1];
//    }
//};
//
////space optimization of above
//class Solution2 {
//public:
//    int longestCommonSubsequence(string s1, string s2) {
//        
//        vector<int>prev(s2.length(),0),curr(s2.length(),0);
//        
//        if(s1[0] == s2[0])prev[0] = 1;
//        
//        for(int k = 1; k<s2.length() ; k++){
//            if(s1[0] == s2[k])prev[k] = 1;
//            else prev[k] = prev[k-1];
//        }
//
//        for(int i = 1; i<s1.length(); i++){
//            
//            curr[0] = (s1[i] == s2[0]) ? 1 : prev[0];
//            
//            for(int k = 1; k<s2.length() ; k++){
//                
//                if(s1[i] == s2[k]){
//                    curr[k] = 1 + prev[k-1];
//                }else{
//                    curr[k] = max(prev[k],curr[k-1]);
//                }
//            }
//            
////            for(auto i : prev){
////                cout<<i<<" ";
////            }
////            cout<<endl;
//            prev = curr;
//        }
//        
//        return prev[s2.length()-1];
//    }
//};
//
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////better code then above as smaller base case
//class Solution3 {
//    int customFunc(string s1,string s2,int idx1,int idx2, vector<vector<int>>& dp){
//        
//        if(idx1<0 || idx2<0)return 0;
//        
//        if(dp[idx1][idx2] != -1)return dp[idx1][idx2];
//        
//        if(s1[idx1] == s2[idx2]){
//            return dp[idx1][idx2] = 1 + customFunc(s1,s2,idx1-1,idx2-1, dp);
//        }
//        
//        return dp[idx1][idx2] = max(customFunc(s1,s2,idx1-1,idx2, dp),customFunc(s1,s2,idx1,idx2-1, dp));
//    }
//public:
//    int longestCommonSubsequence(string s1, string s2) {
//        
//        vector<vector<int>>dp(s1.length(),vector<int>(s2.length(),-1));
//        
//        int ans = customFunc(s1, s2, s1.length()-1, s2.length()-1, dp);
//        
//        for(auto i : dp){
//            for(int k : i){
//                cout<<k<<" ";
//            }
//            cout<<endl;
//        }
//        
//        return ans;
//    }
//};
//
////tabulation of the above -- recursion + memo is giving MLE on leetcode
////tabulation - base case have two approach -- one as above tabulation
////another is shifting origin -- shift origin to +1 as for the base case i<0 || j<0  , we can write the base case but it will be very lengthy
//// so shift the origin by 1 and now new base case is if(i==0 || j==0)
//
////recursion + memo with new base case
//
//class Solution4 {
//    int customFunc(string s1,string s2,int idx1,int idx2, vector<vector<int>>& dp){
//        
//        if(idx1 == 0 || idx2 == 0)return 0;
//        
//        if(dp[idx1][idx2] != -1)return dp[idx1][idx2];
//        
//        if(s1[idx1-1] == s2[idx2-1]){
//            return dp[idx1][idx2] = 1 + customFunc(s1,s2,idx1-1,idx2-1, dp);
//        }
//        
//        return dp[idx1][idx2] = max(customFunc(s1,s2,idx1-1,idx2, dp),customFunc(s1,s2,idx1,idx2-1, dp));
//    }
//public:
//    int longestCommonSubsequence(string s1, string s2) {
//        
//        vector<vector<int>>dp(s1.length()+1,vector<int>(s2.length()+1,-1));
//        
//        return customFunc(s1, s2, s1.length(), s2.length(), dp);
//    }
//};
//
//
////tabulation after shifting
//class Solution5 {
//public:
//    int longestCommonSubsequence(string s1, string s2) {
//        
//        int l1 = s1.length();
//        int l2 = s2.length();
//        vector<vector<int>>dp(l1+1,vector<int>(l2+1,0));
//        
//        for(int i = 1; i<=l1 ; i++){
//            for(int k = 1; k<=l2 ; k++){
//                if(s1[i-1] == s2[k-1]){
//                    dp[i][k] = 1 + dp[i-1][k-1];
//                }else{
//                    dp[i][k] = max(dp[i-1][k],dp[i][k-1]);
//                }
//            }
//        }
//        
//        return dp[l1][l2];
//    }
//};
//
//class Solution6 {
//public:
//    int longestCommonSubsequence(string s1, string s2) {
//        
//        int l1 = s1.length();
//        int l2 = s2.length();
//        vector<int>prev(l2+1,0),curr(l2+1,0);
//        
//        for(int i = 1; i<=l1 ; i++){
//            for(int k = 1; k<=l2 ; k++){
//                if(s1[i-1] == s2[k-1]){
//                    curr[k] = 1 + prev[k-1];
//                }else{
//                    curr[k] = max(prev[k],curr[k-1]);
//                }
//            }
//            prev = curr;
//        }
//        
//        return prev[l2];
//    }
//};
//
//
//
//
//int main(){
//    
//    string s1 = "abcde";
//    string s2 = "ace";
//    
////    s1 = "abc";
////    s2 = "abc";
//    
////    s1 = "abc";
////    s2 = "def";
//    
//    Solution5 sol;
//    
//    cout<<sol.longestCommonSubsequence(s1, s2)<<endl;
//    
//    return 0;
//}
