////
////  2_climbing_stairs.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 14/10/24.
////
//
//#include <stdio.h>
//#include "bits/stdc++.h"
//
//using namespace std;
//
//////pure recursive solution
////int climbStairs(int n) {
////    if(n<=3)return n;
////    
////    return climbStairs(n-1)+climbStairs(n-2);
////}
//
//
//
//////recursion + memoisation / top down approach
////int customFunc(int n,vector<int>&dp){
////    if(n<=3)return n;
////    
////    if(dp[n] != -1)return dp[n];
////    
////    return dp[n] = customFunc(n-1,dp)+customFunc(n-2,dp);
////}
////
////int climbStairs(int n){
////    
////    vector<int>dp(n+1,-1);
////    
////    return customFunc(n,dp);
////}
//
//
//
//////tabulation /bottom up approach / iterative
////int climbStairs(int n){
////    vector<int>dp(n+1,-1);
////    
////    dp[0] = 0;
////    dp[1] = 1;
////    dp[2] = 2;
////    
////    for(int i=3;i<=n;i++){
////        dp[i] = dp[i-1]+dp[i-2];
////    }
////    
////    return dp[n];
////}
//
//
////space optimised
//int climbStairs(int n){
//    
//    int prev2 = 1;
//    int prev1 = 1;
//    
//    for(int i = 2;i<=n;i++){
//        int curr = prev1+prev2;
//        prev2 = prev1;
//        prev1 = curr;
//    }
//    
//    return prev1;
//}
//
//
//
//int main(){
//    
//    int n = 45;
//    
//    cout<<climbStairs(n)<<endl;
//    
//    return 0;
//}
