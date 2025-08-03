////
////  15_partition_equal_subset_sum.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 09/07/25.
////
//
//#include "bits/stdc++.h"
//
//using namespace std;
//
////bool customFunc(vector<int>& nums,int currSum,int tSum,int i){
////    
////    if(tSum == currSum)return 1;
////    if(i<0 || currSum > tSum)return 0;
////    
////    bool take = customFunc(nums,currSum+nums[i],tSum - nums[i],i-1);
////    bool notTake = customFunc(nums,currSum,tSum,i-1);
////    
////    return take||notTake;
////}
////
////bool canPartition(vector<int>& nums) {
////    
////    int tSum = accumulate(nums.begin(), nums.end(), 0);
////    
////    return customFunc(nums,0,tSum,nums.size()-1);
////}
//
//
//
////memoization
//bool customFunc(vector<int>& arr,int sum,int n,int currSum,vector<vector<int>>& dp){
//    
//    if(currSum>sum)return 0;
//    if(currSum == sum)return 1;
//    if(n<0)return 0;
//    if(dp[n][currSum] != -1)return dp[n][currSum];
//
//    bool take = customFunc(arr,sum,n-1,currSum + arr[n],dp);
//    bool notTake = customFunc(arr,sum,n-1,currSum,dp);
//
//    return dp[n][currSum] = take || notTake;
//}
//
//bool canPartition(vector<int>& nums) {
//    
//    int totalSum = accumulate(nums.begin(), nums.end(), 0);
//    
//    if(totalSum % 2 != 0)return 0;
//    
//    int targetSum = totalSum/2;
//    //now it becomes exactly same as previous problem
//    
//    vector<vector<int>>dp(nums.size(),vector<int>(targetSum,-1));
//    
//    return customFunc(nums,targetSum,nums.size()-1,0,dp);
//}
//
//
//
////tabulation
//
//
//
//int main(){
//    
//    vector<int>nums = {1,5,11,5};
////    nums = {1,2,3,5};
////    nums = {23,13,11,7,6,5,5};
////    nums = {9,10,15,3,9,2,9,10,13,1};
////    nums = {100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,100,99,97};
//    
//    cout<<canPartition(nums)<<endl;
//    
//    return 0;
//}
