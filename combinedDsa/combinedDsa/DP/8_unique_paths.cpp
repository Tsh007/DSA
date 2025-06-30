////
////  8_unique_paths.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 15/11/24.
////
//
//#include <stdio.h>
//#include "bits/stdc++.h"
//
//using namespace std;
//
////int customFunc(int m,int n,int currM,int currN){
////    
////    if(currM<0 || currN<0)return 0;
////    
////    if(currM == 0 && currN == 0)return 1;
////    
////    int down = customFunc(m, n, currM - 1, currN);
////    
////    int right = customFunc(m, n, currM, currN - 1);
////    
////    return right+down;
////}
////
////int uniquePaths(int m, int n) {
////        
////    return customFunc(m, n, m-1, n-1);
////}
//
//
////topdown == recursion + memoisation
////int customFunc(int m,int n,int currM,int currN,vector<vector<int>>&dp){
////    
////    if(currM<0 || currN<0)return 0;
////    
////    if(currM == 0 && currN == 0)return 1;
////    
////    if(dp[currM][currN] != -1)return dp[currM][currN];
////    
////    int down = customFunc(m, n, currM - 1, currN,dp);
////    
////    int right = customFunc(m, n, currM, currN - 1,dp);
////    
////    return dp[currM][currN] = right+down;
////}
////
////int uniquePaths(int m, int n) {
////        
////    vector<vector<int>>dp(m,vector<int>(n,-1));
////    
////    return customFunc(m, n, m-1, n-1,dp);
////}
//
//
////bottomup == iterative + memoization
////int uniquePaths(int m, int n) {
////        
////    vector<vector<int>>dp(m,vector<int>(n,-1));
////    
////    //base case
////    for(int i = 0 ; i < m ; i++){
////        dp[i][0] = 1;
////    }
////    
////    for(int i = 0 ; i < n ; i++){
////        dp[0][i] = 1;
////    }
////    for(int currM = 1;currM<m;currM++){
////        for(int currN = 1;currN<n;currN++){
////            
////            int down = dp[currM-1][currN];
////            
////            int right = dp[currM][currN-1];
////            
////            dp[currM][currN] = right+down;
////        }
////    }
//////        for(auto i : dp){
//////            for(auto k : i){
//////                cout<<k<<" ";
//////            }
//////            cout<<endl;
//////        }
////    
////    return dp[m-1][n-1];
////    
////    
//////    int x = customFunc(m, n, m-1, n-1,dp);
//////    for(auto i : dp){
//////        for(auto k : i){
//////            cout<<k<<" ";
//////        }
//////        cout<<endl;
//////    }
//////    return x;
////}
//
////better bottomup == iterative + memoization
//int uniquePaths(int m, int n) {
//
//    vector<vector<int>>dp(m,vector<int>(n,-1));
//
//    //base case
////    for(int i = 0 ; i < m ; i++){
////        dp[i][0] = 1;
////    }
////
////    for(int i = 0 ; i < n ; i++){
////        dp[0][i] = 1;
////    }
//    
//    dp[0][0] = 1;
//    for(int currM = 0;currM<m;currM++){
//        for(int currN = 0;currN<n;currN++){
//
////            if (currM == 0 && currN == 0) {
////                dp[currM][currN] = 1;
////                continue; // Skip the rest of the loop and continue with the next iteration.
////            }
//            
//            int down = 0;
//            if(currM>0) down += dp[currM-1][currN];
//
//            int right = 0;
//            if(currN>0) right += dp[currM][currN-1];
//
//            dp[currM][currN] = right+down;
//        }
//    }
////        for(auto i : dp){
////            for(auto k : i){
////                cout<<k<<" ";
////            }
////            cout<<endl;
////        }
//
//    return dp[m-1][n-1];
//
//
////    int x = customFunc(m, n, m-1, n-1,dp);
////    for(auto i : dp){
////        for(auto k : i){
////            cout<<k<<" ";
////        }
////        cout<<endl;
////    }
////    return x;
//}
//
//
////space optimise
////int uniquePaths(int m, int n) {
////
////    vector<int>dp(n,-1);
////
////    for(int i = 0 ; i < n ; i++){
////        dp[i] = 1;
////    }
////    for(int currM = 1;currM<m;currM++){
////        
////        vector<int>temp(n,1);
////        
////        for(int currN = 1;currN<n;currN++){
////            
////            int down = dp[currN];
////            
////            int right = temp[currN-1];
////            
////            temp[currN] = right+down;
////        }
////        dp = temp;
////    }
////    return dp[n-1];
////}
//
//
//int main(){
//    
//    int m = 3;
//    int n = 2;
//    
//    
////    m=3;n=7;
////    
////    m=15;n=13;
//    
//    cout<<uniquePaths(m, n)<<endl;
//    
//    return 0;
//}
