////
////  4_frog_jump_with_k_distance.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 18/10/24.
////
//
//#include <stdio.h>
//#include "bits/stdc++.h"
//
//using namespace std;
//
//
//////pure recursive
////int customFunc(int k, vector<int>& arr, int n){
////    
////    if(n>=arr.size()) return INT_MAX;
////    
////    if(n == arr.size() - 1)return 0;
////    
////    int minA = INT_MAX;
////    
////    for(int i=1;i<=k;i++){
////        
////        if(n+i >= arr.size())continue;
////        
////        int val = llabs(arr[n] - arr[n+i]) + customFunc(k,arr,n+i);
////        minA = min(minA , val);
////    }
////    
////    return minA;
////}
////
////int minimizeCost(int k, vector<int>& arr) {
////    // Code here
////    
////    return customFunc(k, arr, 0);
////    
////}
//
//
//
//////////applying memoization in this top down approach --> recursion + memoization
////int customFunc(int k, vector<int>& arr, int n,vector<int>&dp){
////
////    if(n>=arr.size()) return INT_MAX;
////
////    if(n == arr.size() - 1)return 0;
////
////    int minA = INT_MAX;
////    
////    if(dp[n]!=-1)return dp[n];
////
////    for(int i=1;i<=k;i++){
////
////        if(n+i >= arr.size())continue;
////
////        int val = llabs(arr[n] - arr[n+i]) + customFunc(k,arr,n+i,dp);
////        minA = min(minA , val);
////    }
////
////    
////    return dp[n] = minA;
////}
////
////int minimizeCost(int k, vector<int>& arr) {
////    // Code here
////
////    vector<int>dp(arr.size(),-1);
////    
////    return customFunc(k, arr, 0,dp);
////
////}
//
//
//
////bottom up approach
//int customFunc(int k, vector<int>& arr, int n,vector<int>&dp){
//
//    if(n>=arr.size()) return INT_MAX;
//
//    if(n == arr.size() - 1)return 0;
//
//    int minA = INT_MAX;
//
//    if(dp[n]!=-1)return dp[n];
//
//    for(int i=1;i<=k;i++){
//
//        if(n+i >= arr.size())continue;
//
//        int val = llabs(arr[n] - arr[n+i]) + customFunc(k,arr,n+i,dp);
//        minA = min(minA , val);
//    }
//
//
//    return dp[n] = minA;
//}
//
//int minimizeCost(int k, vector<int>& arr) {
//        
//    vector<int>dp(arr.size()+1,0);
//
//    for(int j = arr.size() - 1; j >=0 ;j--){
//        int minA = INT_MAX;
//        
//        for(int i=1;i<=k;i++){
//            
//            if(j+i >= arr.size()){
//                if(minA == INT_MAX)minA = 0;
//                continue;
//            }
//            
//            int val = llabs(arr[j] - arr[j+i]) + dp[j+i];
//            minA = min(minA , val);
//        }
//        
//        
//        dp[j] = minA;
////        cout<<dp[j+1]<<endl;
//    }
//    
//    
//    return dp[0];
//
//}
//
//
//
//int main(){
//    
//    vector<int>arr = {10, 30, 40, 50, 20};
//    int k = 3;
//     
//    arr = {10, 20, 10};
//    k = 1;
//        
//    
//    arr = {10,30,40,50,20,70};
//    k = 2;
//    
//    cout<<minimizeCost(k, arr)<<endl;
//    
//    
//    
//    return 0;
//}
