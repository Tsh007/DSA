////
////  lc494_potd_26_dec_24.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 26/12/24.
////
//
//#include "bits/stdc++.h"
//
//using namespace std;
//
//int customFunc(vector<vector<int>>& dp,vector<int>& nums,int target,int result,int idx){
//        if(idx == -1){
//            if(result == target)return 1;
//            return 0;
//        }
//        
//        if(dp[idx][result+1000] != -1)return dp[idx][result+1000];
//
//        int pos = customFunc(dp,nums,target,result+nums[idx],idx-1);
//
//        int neg = customFunc(dp,nums,target,result-nums[idx],idx-1);
//
//        return dp[idx][result+1000] = pos+neg;
//    }
//
//    int findTargetSumWays(vector<int>& nums, int target) {
//
//        vector<vector<int>>dp(nums.size(),vector<int>(2001,-1));
//
//
//
//        // for(int idx = 1 ;idx<nums.size();idx++){
//        //     for(int result = 0;result<target+1000;result++){
//        //         int pos = dp[idx-1][result+nums[idx]];
//            
//        //         int neg = dp[idx-1][result-nums[idx]];
//
//        //         dp[idx][result+1000] = pos+neg;
//        //     }
//        // }
//
//        // return dp[nums.size()-1][target+1000];
//        int x = customFunc(dp,nums,target,0,nums.size()-1);
//
//        for(auto i : dp){
//            for(auto k : i){
//                cout<<k<<" ";
//            }
//            cout<<endl;
//        }
//
//        return x;
//    }
//
//int main(){
//    
//    vector<int>nums = {1,1,1,1,1};
//    
//    int target = 3;
//    
//    cout<<findTargetSumWays(nums, target)<<endl;
//    
//    return 0;
//}
