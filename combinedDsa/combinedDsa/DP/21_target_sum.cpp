//
////
////  21_target_sum.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 29/07/25.
////
//
//#include "bits/stdc++.h"
//
//using namespace std;
//
////recursive
////class Solution {
////    int ways(vector<int>& nums,int target,int i){
////        
////        if(i == 0){
////            if(target == 0 && nums[0] == 0)return 2;
////            if(target-nums[0] == 0)return 1;
////            if(target+nums[0] == 0)return 1;
////            
////            return 0;
////        }
////        
////        int addWays = ways(nums,target-nums[i],i-1);
////        
////        int subWays = ways(nums,target+nums[i],i-1);
////        
////        return addWays + subWays;
////    }
////public:
////    int findTargetSumWays(vector<int>& nums, int target) {
////        
////        return ways(nums,target,nums.size()-1);
////    }
////};
//
//
////better approach
////recursive + memo
//class Solution {
//    int customFunc(vector<int>& nums,int target,int i,vector<vector<int>>& dp){
//        
//        if(i == 0){
//            if(target == 0 && nums[0] == 0)return 2;
//            if(target == 0)return 1;
//            if(target - nums[0] == 0)return 1;
//            return 0;
//        }
//        
//        if(i<0 || target < 0)return 0;
//        
//        if(dp[i][target] != -1)return dp[i][target];
//        
//        int take = customFunc(nums, target - nums[i], i-1, dp);
//        
//        int notTake = customFunc(nums,target,i-1 ,dp);
//        
//        return dp[i][target] = take + notTake;
//    }
//public:
//    int findTargetSumWays(vector<int>& nums, int target) {
//        int total = accumulate(nums.begin(), nums.end(), 0);
//        
//        if((total+target) % 2 != 0 || total + target < 0)return 0;
//        
//        int sum1 = (total + target)/2;
//        
//        vector<vector<int>>dp(nums.size(),vector<int>(sum1+1,-1));
//        
//        return customFunc(nums,sum1,nums.size()-1,dp);
//    }
//};
//
////tabulation
//class Solution1 {
//public:
//    int findTargetSumWays(vector<int>& nums, int target) {
//        int total = accumulate(nums.begin(), nums.end(), 0);
//        
//        if((total+target) % 2 != 0 || total + target < 0)return 0;
//        
//        int sum1 = (total + target)/2;
//        
//        vector<vector<int>>dp(nums.size(),vector<int>(sum1+1,0));
//        
//        if(nums[0]<=target)dp[0][nums[0]] = 1;
//        
//        if(nums[0] == 0)dp[0][0] = 2;
//        
//        for(int i = 1; i<nums.size() ; i++){
//            for(int k = 0; k<=sum1 ; k++){
//                int take = 0;
//                if(k - nums[i] >= 0)take = dp[i-1][k - nums[i]];
//                
//                int notTake = dp[i-1][k];
//                
//                dp[i][k] = take + notTake;
//            }
//        }
//        
//        return dp[nums.size()-1][sum1];
//    }
//};
//
//
////space optimization
//class Solution2 {
//    int countPartitions(vector<int>& arr, int d) {
//        int total = accumulate(arr.begin(),arr.end(),0);
//        
//        //as target can be negative take absolute value of target
//        //this is the only change here, everything else is same as in dp 18
//        if((total+abs(d))%2)return 0;
//        int sum1 = (total + abs(d))/2;
//        
//        vector<int>prev(sum1+1,0);
//        
//        //base case
//        if(arr[0] == 0)prev[0] = 2;
//        else prev[0] = 1;
//        
//        if(arr[0] != 0 && arr[0] <= sum1)prev[arr[0]] = 1;
//        
//        for(int i = 1; i<arr.size() ; i++){
//            vector<int>curr(sum1+1,0);
//            for(int k = 0; k<=sum1 ; k++){
//                
//                int take = 0;
//                if(k-arr[i]>=0)take = prev[k-arr[i]];
//
//                int notTake = prev[k];
//
//                curr[k] = take + notTake;
//            }
//            prev = curr;
//        }
//
//        return prev[sum1];
//    }
//public:
//    int findTargetSumWays(vector<int>& nums, int target) {
//        return countPartitions(nums,target);
//    }
//};
//
//
//int main(){
//    
//    vector<int> nums = {1,1,1,1,1};
//    int target = 3;
//    
//    nums = {1};
//    target = 1;
//    
//    nums = {1000};
//    target = {-1000};
//    
//    Solution1 sol;
//    
//    cout<<sol.findTargetSumWays(nums, target)<<endl;
//    
//    
//    return 0;
//}
