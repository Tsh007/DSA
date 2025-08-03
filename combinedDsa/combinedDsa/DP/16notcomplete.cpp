////
////  16_partition_array_into_two_array_to_minimize_sum_difference.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 09/07/25.
////
//
//#include "bits/stdc++.h"
//
//using namespace std;
//
////recursion
////int customFunc(vector<int>& nums,int n,int i,int lSum,int rSum,int lSize,int rSize){
////    
////    if(lSize > n/2 || rSize > n/2)return INT_MAX;
////    if(i < 0){
////        return abs(lSum - rSum);
////    }
////    
////    int takeLeft = customFunc(nums,n,i-1,lSum+nums[i],rSum,lSize+1,rSize);
////    int takeRight = customFunc(nums,n,i-1,lSum,rSum+nums[i],lSize,rSize+1);
////    
////    return min(takeLeft,takeRight);
////}
////
////int minimumDifference(vector<int>& nums) {
////    int n = nums.size();
////    
////    return customFunc(nums, n, n-1, 0, 0, 0, 0);
////}
//
//
////recursion + memo
////int customFunc(vector<int>& nums,int n,int i,int lSum,int rSum,int lSize,int rSize,map<pair<int,int>,int>& dp){
////    
////    if(lSize > n/2 || rSize > n/2)return INT_MAX;
////    if(i < 0){
////        return abs(lSum - rSum);
////    }
////    
////    if(dp[{lSum,rSum}] != 0)return dp[{lSum,rSum}];
////    
////    int takeLeft = customFunc(nums,n,i-1,lSum+nums[i],rSum,lSize+1,rSize,dp);
////    int takeRight = customFunc(nums,n,i-1,lSum,rSum+nums[i],lSize,rSize+1,dp);
////    
////    return dp[{lSum,rSum}] = min(takeLeft,takeRight);
////}
////
////int minimumDifference(vector<int>& nums) {
////    int n = nums.size();
////    //cant use matrix as there can be negative elements
////    map<pair<int,int>,int>dp;
////    
////    return customFunc(nums, n, n-1, 0, 0, 0, 0, dp);
////}
//
//
////cant be tabulation
////better to do using striver method
////trying striver method
////bool subsetSum(vector<int>& arr,int sum){
////    
////    vector<vector<int>>dp(arr.size(),vector<int>(sum,0));
////    
////    for(int i = 0; i<arr.size() ; i++){
////        for(int k = 0; k<sum ; k++){
////            
////            bool take = 0;
////            if(i>0 && k-arr[i] >= 0)take = dp[i-1][k - arr[i]];
////                
////            bool notTake = 0;
////            if(i>0)notTake = dp[i-1][k];
////                
////            dp[i][k] = take || notTake || k-arr[i] == 0 || k == 0;
////
////        }
////    }
////        cout<<endl;
////        for(auto i : dp){
////            for(auto k : i){
////                cout<<k<<" ";
////            }
////            cout<<endl;
////        }
////
////        cout<<endl;
////    
////    return dp[arr.size()-1][0];
////}
//
//
//// striver method wont work on leetcode watch aryan mittal video on this for leetcode problem
////
//
//
//int main(){
//    
//    vector<int>nums = {3,9,7,3};//2
////    nums = {-36,36};//72
//    
////    nums = {2,-1,0,4,-2,-9};//0
//    
////    cout<<minimumDifference(nums)<<endl;
//
//    cout<<subsetSum(nums, 22)<<endl;
//    return 0;
//}
