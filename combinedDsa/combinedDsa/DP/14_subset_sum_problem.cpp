////
////  14_subset_sum_problem.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 11/01/25.
////
//
//#include "bits/stdc++.h"
//
//using namespace std;
//
//
////bruteforce recursion
//
////bool customFunc(vector<int>& arr,int target,int idx,int sum){
////    
////    //base case
////    if(sum == target)return 1;
////    if(sum > target || idx < 0)return 0;
////    
////    
////    bool take = customFunc(arr, target, idx-1, sum+arr[idx]);
////    
////    bool notTake = customFunc(arr, target, idx-1, sum);
////    
////    return (take || notTake);
////}
////
////bool isSubsetSum(vector<int>& arr, int target) {
////        // code here
////    
////    return customFunc(arr,target,arr.size()-1,0);
////}
//
//
//
//
////recursion + memo == top down
//
////bool customFunc(vector<int>& arr,int target,int idx,int sum,vector<vector<int>>& dp){
////    
////    //base case
////    if(sum == target)return 1;
////
////    if(sum > target || idx < 0)return 0;
////        
////    if(dp[idx][sum] != -1)return dp[idx][sum];
////    
////    bool take = customFunc(arr, target, idx-1, sum+arr[idx],dp);
////    
////    bool notTake = customFunc(arr, target, idx-1, sum,dp);
////    
////    return dp[idx][sum] = (take || notTake);
////}
////
////bool isSubsetSum(vector<int>& arr, int target) {
////        // code here
////    
////    vector<vector<int>>dp(arr.size(),vector<int>(target+1,-1));
////    
////    int ans = customFunc(arr,target,arr.size()-1,0,dp);
////    
////    for(auto i : dp){
////        for(auto k : i){
////            cout<<k<<" ";
////        }
////        cout<<endl;
////    }
////    
////    return ans;
////}
//
//
////tabulation == iterative + memo == bottom up
//
//bool isSubsetSum(vector<int>& arr, int target) {
//        // code here
//    
//    vector<vector<int>>dp(arr.size(),vector<int>(target+1,-1));
//    
//    for(int i = 0 ; i<arr.size();i++){
//        dp[i][target] = 1;
//    }
//    
//    for(int idx = 0 ;idx<arr.size();idx++){
//        for(int sum = target;sum>=0;sum-=1){
//
//            bool take = 0;
//            if(idx>0 && sum+arr[idx] <= target)take = dp[idx-1][sum+arr[idx]];
//                
//            bool notTake = 0;
//            if(idx>0)notTake = dp[idx-1][sum];
//                
//            dp[idx][sum] = (take || notTake || (sum==target) || (sum+arr[idx]==target));
//        }
//    }
//    
////    for(auto i : dp){
////        for(auto k : i){
////            cout<<k<<" ";
////        }
////        cout<<endl;
////    }
//    return dp[arr.size()-1][0];
////    cout<<dp[arr.size()-1][0]<<endl;
//    
////    vector<vector<int>>dp1(arr.size(),vector<int>(target+1,-1));
////    
////    bool ans = customFunc(arr, target, arr.size()-1, 0, dp1);
////    
////    for(auto i : dp1){
////        for(auto k : i){
////            cout<<k<<" ";
////        }
////        cout<<endl;
////    }
////
////    return ans;
//}
//
//
//int main(){
//    
//    vector<int> arr = {3, 34, 4, 12, 5, 2};
//    int target = 9;
////    
//    arr = {3, 34, 4, 12, 5, 2};
//    target = 30;
//    
//    
//    arr = {1, 2, 3};
//    target = 6;
//    
//    arr = {29,66,31,2,28,88,1,97,73,78,62,27};
//    target = 582;
//    
//    cout<<isSubsetSum(arr, target)<<endl;
//    
//    return 0;
//}
