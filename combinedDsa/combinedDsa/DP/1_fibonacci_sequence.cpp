////
////  1_fibonacci_sequence.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 13/10/24.
////
//
//#include <stdio.h>
//#include "bits/stdc++.h"
//
//using namespace std;
//
////read this article after watching striver video
////https://medium.com/enjoy-algorithm/top-down-vs-bottom-up-approach-in-dynamic-programming-53b917bfbe0#:~:text=The%20top%2Ddown%20approach%20is,of%20the%20recursion%20call%20stack.
//
////difference between top down and bottom up approach
//
//////pure recursive solution
////int fib(int n){
////    if(n<=1)return n;
////    
////    return fib(n-1)+fib(n-2);
////}
////
////
//////recursion + memoisation == top down approach
////int fib(int n,vector<int>&dp){
////    if(n<=1)return n;
////    
////    if(dp[n]!=-1)return dp[n];
////    
////    dp[n] = fib(n-1,dp) + fib(n-2,dp);
////    
////    return dp[n];
////}
//
//
//////bottom up approach
////int fib(int n,vector<int>&dp){
////   
////    dp[0] = 0;
////    dp[1] = 1;
////    
////    for(int i=2 ;i<=n;i++){
////        dp[i] = dp[i-1] + dp[i-2];
////    }
////    
////    return dp[n];
////    
////}
//
//
////space optimisation of fibonacci sequence
//int fib(int n){
//    int prev2 = 0;
//    int prev = 1;
//    
//    for(int i = 2;i<=n;i++){
//        int curr = prev + prev2;
//        prev2 = prev;
//        prev = curr;
//    }
//    
//    return prev;
//}
//
//int main(){
//    
//    
////    int n = 100;
////    
////    cout<<fib(n)<<endl;
//    //above pure recursive solution takes so much time test yourself with n = 100,1000....
//    
//    
//    //recursion + memoisation
////    int n = 5;
//    
////    n = 30;
//    
////    vector<int>dp(n+1,-1);
//        
////    cout<<fib(n,dp)<<endl;
//    
//    
//    
//    //space optimization
//    int n = 5;
////    n = 20;
//    
//    cout<<fib(n)<<endl;
//
//    
//    return 0;
//}
