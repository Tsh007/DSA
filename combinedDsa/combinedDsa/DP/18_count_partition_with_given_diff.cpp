////
////  18_count_partition_with_given_diff.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 24/07/25.
////
//
//#include "bits/stdc++.h"
//
//using namespace std;
//
//class Solution {
//    int customFunc(vector<int>& arr,int target,int i){
//        
//        if(i == 0){
//            if(target == 0 && arr[i] == 0)return 2;
//            if(target == 0)return 1;
//            if(target == arr[i])return 1;
//            return 0;
//        }
//        
//        if(i<0 || target<0)return 0;
//        
//        int take = customFunc(arr,target - arr[i],i-1);
//        
//        int notTake = customFunc(arr,target,i-1);
//        
//        return take + notTake;
//    }
//  public:
//    int countPartitions(vector<int>& arr, int d) {
//        
//        int total = accumulate(arr.begin(),arr.end(),0);
//
//        if((total+d)%2)return 0;
//
//        int sum1 = (total + d)/2;
//
//        return customFunc(arr, sum1, arr.size()-1);
//    }
//};
//
//
////recursion + memo
//class Solution1 {
//    int customFunc(vector<int>& arr,int target,int i,vector<vector<int>>& dp){
//        
//        if(i == 0){
//            if(target == 0 && arr[i] == 0)return 2;
//            if(target == 0)return 1;
//            if(target == arr[i])return 1;
//            return 0;
//        }
//        
//        if(i<0 || target<0)return 0;
//        
//        if(dp[i][target] != -1)return dp[i][target];
//        
//        int take = customFunc(arr,target - arr[i],i-1,dp);
//        
//        int notTake = customFunc(arr,target,i-1,dp);
//        
//        return dp[i][target] = take + notTake;
//    }
//  public:
//    int countPartitions(vector<int>& arr, int d) {
//        
//        int total = accumulate(arr.begin(),arr.end(),0);
//        
//        if((total+d)%2)return 0;
//        
//        int sum1 = (total + d)/2;
//        
//        vector<vector<int>>dp(arr.size(),vector<int>(sum1+1,-1));
//        
//        return customFunc(arr, sum1, arr.size()-1, dp);
//    }
//};
//
//
////tabulation
//class Solution2 {
//  public:
//    int countPartitions(vector<int>& arr, int d) {
//
//        int total = accumulate(arr.begin(),arr.end(),0);
//        if((total+d)%2)return 0;
//        int sum1 = (total + d)/2;
//        vector<vector<int>>dp(arr.size(),vector<int>(sum1+1,0));
//        
//        //base case
//        if(arr[0] == 0)dp[0][0] = 2;
//        else dp[0][0] = 1;
//        
//        if(arr[0] != 0 && arr[0] <= sum1)dp[0][arr[0]] = 1;
//        
//        for(int i = 1; i<arr.size() ; i++){
//            for(int k = 0; k<=sum1 ; k++){
//                
//                int take = 0;
//                if(k-arr[i]>=0)take = dp[i-1][k-arr[i]];
//
//                int notTake = dp[i-1][k];
//
//                dp[i][k] = take + notTake;
//            }
//        }
//
//        return dp[arr.size()-1][sum1];
//    }
//};
//
////space optimization
//class Solution3 {
//  public:
//    int countPartitions(vector<int>& arr, int d) {
//
//        int total = accumulate(arr.begin(),arr.end(),0);
//        if((total+d)%2)return 0;
//        int sum1 = (total + d)/2;
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
//};
//
//
//int main(){
//    
//    vector<int>arr = {5,2,6,4};
//    int d = 3;
//    
//    arr = {1,1,1,1};
//    d = 0;
//    
//    arr = {1,2,1,0,1,3,3};
//    d = 11;
//    
//    arr = {1,2,1,0,1,3,3};
//    d = 10;//expected 0
//    
//    arr = {2,3,5,1,3,4,5,4,4,5,2,4,1,1};
//    d = 48;
//    
//    Solution sol;
//    
//    cout<<sol.countPartitions(arr,d)<<endl;
//    
//    return 0;
//}
