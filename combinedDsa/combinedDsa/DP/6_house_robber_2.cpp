////
////  6_house_robber_2.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 27/10/24.
////
//
//#include <stdio.h>
//#include "bits/stdc++.h"
//
//
//using namespace std;
//
//
////recursive
////int customFunc(vector<int>&nums,int idx,int flag){
////    
////    if(idx == 0){
////        if(flag)return 0;
////        return nums[0];
////    }
////    
////    if(idx < 0)return 0;
////    
////    int pick = nums[idx];
////    
////    if(idx == nums.size()-1){
////        pick += customFunc(nums, idx-2, true);
////    }else{
////        pick += customFunc(nums, idx-2, flag);
////    }
////    
////    int notPick = 0 + customFunc(nums, idx-1,flag);
////    
////    return max(pick,notPick);
////    
////}
////
////int rob(vector<int>& nums) {
////    return customFunc(nums, nums.size()-1, false);
////}
//
//
////recursive + memoisation == top down (start from n easier)
////same as previous question
//int customFunc(vector<int>&nums,int idx,vector<int>&dp){
//    
//    if(idx == 0){
//        return nums[0];
//    }
//    
//    if(idx < 0)return 0;
//    
//    if(dp[idx]!=-1)return dp[idx];
//    
//    
//    int notPick = 0 + customFunc(nums, idx-1,dp);
//    
//    int pick = nums[idx] + customFunc(nums, idx-2,dp);
//    
//    return dp[idx] = max(pick,notPick);
//    
//}
//
//int rob(vector<int>& nums) {
//    
//    if(nums.size() == 1)return nums[0];
//    
//    vector<int>dp(nums.size(),-1);
//    
//    int notTake1 = customFunc(nums, nums.size()-2,dp);
//    
//    nums[0] = 0;
//    
//    vector<int>dp1(nums.size(),-1);
//    
//    int take1 = customFunc(nums, nums.size()-1, dp1);
//    
//    return max(take1,notTake1);
//    
//    
//}
//
//
//int main(){
//    
//    vector<int>nums = {1,2,3,1};//4
//    
//    nums = {2,3,2};//3
////    
//    nums = {1,2,3};//3
////    
//    nums = {200,3,140,20,10};//340
////    
//    nums = {4,1,2,7,5,3,1};//14
////    
//    nums = {1,2,1,1};//3
//    
//    
//    cout<<rob(nums)<<endl;
//    
////    cout<<nums[0]<<" ";
//    
//    return 0;
//}
