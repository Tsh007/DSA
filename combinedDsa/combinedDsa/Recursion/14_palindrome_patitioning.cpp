////
////  15_palindrome_patitioning.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 05/10/24.
////
//
//#include <stdio.h>
//#include "bits/stdc++.h"
//
//using namespace std;
//
//bool checkPalindrome(int i,int j,string s,vector<vector<int>>&dp){
//    
//    if(dp[i][j]!=-1)return dp[i][j];
//    
//    if(i==j)return dp[i][j] = 1;
//    
//    while(i<=j){
//        if(s[i] != s[j])return dp[i][j] = 0;
//        i++;j--;
//    }
//    
//    return dp[i][j] = 1;
//}
//
//
//void customFunc(vector<vector<string>>&ans,vector<int>arr,string s,int n,vector<vector<int>>&dp){
//    
//    if(n>=s.size()-1){
//        vector<string>sub;
//        int prev = 0;
//        
//        for(int i=0;i<arr.size();i++){
//            if(arr[i] == 1){
//                if(checkPalindrome(prev,i,s,dp)){
//                    sub.push_back(s.substr(prev,i-prev+1));
//                }else{
//                    prev = 0;
//                    break;
//                }
//                prev = i+1;
//            }
//        }
//        
//        if(prev != 0 && checkPalindrome(prev,s.length()-1,s,dp)){
//            sub.push_back(s.substr(prev,s.length()-prev+1));
//            ans.push_back(sub);
//        }
//        
////        if(sub.size()!=0)
//        
//        return;
//    }
//    
//    
//    //not take
//    customFunc(ans, arr, s, n+1,dp);
//    
//    //take
//    arr[n] = 1;
//    customFunc(ans, arr, s, n+1,dp);
//    
//}
//
//
//vector<vector<string>> partition(string s) {
//    
//    vector<vector<int>>dp(s.length(),vector<int>(s.length(),-1));
//        
//    vector<vector<string>>ans;
//    
//    vector<int>arr(s.length(),0);
//    
//    customFunc(ans,arr,s,0,dp);
//    
//    
//    if(checkPalindrome(0,s.length()-1,s,dp)){
//        ans.push_back({s});
//    }
//    
//    return ans;
//}
//
//
//int main(){
//    
//    vector<vector<string>>ans;
//    
//    string s = "aab";
////    s = "a";
////    s = "aabcc";
////    s = "aabaa";
////    s = "cdccdc";
////    s = "abcddcbaabcddcba";
//    
//    
//    ans = partition(s);
//    
//    for(auto i : ans){
//        for(auto k : i){
//            cout<<k<<" ";
//        }
//        cout<<endl;
//    }
//    
//    return 0;
//}
