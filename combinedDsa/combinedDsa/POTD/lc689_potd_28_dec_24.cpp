////
////  lc689_potd_28_dec_24.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 28/12/24.
////
//
//#include "bits/stdc++.h"
//
//using namespace std;
//
////int maxSum = INT_MIN;
////
////int calcSum(vector<int>& nums,int k,int idx){
////    
////    int sum = 0;
////    
////    while(k){
////        sum+=nums[idx];
////        idx++;
////        k--;
////    }
////    
////    return sum;
////}
////
////void customFunc(vector<int>& nums,int k,int idx,int count,int sum,vector<int>ans,vector<vector<int>>& ansIdx){
////    
////    if(count==3){
////        if(sum>maxSum){
////            ansIdx.push_back(ans);
////            maxSum = sum;
////        }else if(sum == maxSum){
////            ansIdx.pop_back();
////            ansIdx.push_back(ans);
////        }
////    }
////    
////    if(idx>nums.size()-k)return;
////    
////    //not take
////    customFunc(nums, k, idx+1, count,sum,ans,ansIdx);
////    
////    ans.push_back(idx);
////    
////    sum+=calcSum(nums,k,idx);
////    customFunc(nums,k,idx+k,count+1,sum,ans,ansIdx);
////    
////}
////
////vector<int> maxSumOfThreeSubarrays(vector<int>& nums, int k) {
////    
////    vector<int>ans;
////    
////    vector<vector<int>>finalAns;
////    
////    customFunc(nums, k, 0, 0, 0, ans, finalAns);
////    
////    ans = finalAns.back();
////    
////    return ans;
////}
//
//
////above dosent work as there are two parameters to see for each calc which is sum of the subarray and idx to be selected
////vector<int>ans;
//
//int calcSum(vector<int>& nums,int idx,int k,vector<int>& dp2){
//    
//    if(dp2[idx] != -1)return dp2[idx];
//    int i = idx;
//    int sum = 0;
//    while(k){
//        sum+=nums[idx];
//        idx++;
//        k--;
//    }
//    
//    return dp2[i] = sum;
//}
//
//int helper(vector<int>& nums,int k,int idx,int count,vector<vector<int>>& dp,vector<int>& dp2){
//    
//    if(count == 0)return 0;
//    
//    if(idx > nums.size()-k)return 0;
//    
//    if(dp[idx][count] != -1)return dp[idx][count];
//    
//    int notTake = helper(nums,k,idx+1,count,dp,dp2);
//    
//    int take = calcSum(nums,idx,k,dp2) + helper(nums,k,idx+k,count-1,dp,dp2);
//    
//    return dp[idx][count] = max(take,notTake);
//}
//
//void solve(vector<int>& nums,int k,int idx,int count,vector<int>& ans,vector<vector<int>>& dp,vector<int>& dp2){
//    
//    if(count == 0) return;
//    
//    if(idx>nums.size()-k)return;
//    
//    int notTake = helper(nums,k,idx+1,count,dp,dp2);
//    
//    int take = calcSum(nums,idx,k,dp2) + helper(nums,k,idx+k,count-1,dp,dp2);
//    
//    if(take >= notTake){
//        ans.push_back(idx);
//        solve(nums,k,idx+k,count-1,ans,dp,dp2);
//    }else{
//        solve(nums,k,idx+1,count,ans,dp,dp2);
//    }
//}
//
//vector<int> maxSumOfThreeSubarrays(vector<int>& nums, int k) {
//
//    vector<int>ans;
//    
//    vector<vector<int>> dp1(nums.size(),vector<int>(4,-1));
//    
//    
//    vector<int> dp2(nums.size(),-1);
//    
//    solve(nums,k,0,3,ans,dp1,dp2);
//    
//    return ans;
//}
//
//
//int main(){
//    
//    vector<int>nums = {1,2,1,2,6,7,5,1};
//    int k = 2;//035
//    
//    nums = {1,2,1,2,1,2,1,2,1};
//    k = 2;//024
//    
//    vector<int>finalAns = maxSumOfThreeSubarrays(nums, k);
//    
//    for(auto i : finalAns){
//        cout<<i<<" ";
//    }
//    
//    cout<<endl;
//    
//    
//    return 0;
//}
