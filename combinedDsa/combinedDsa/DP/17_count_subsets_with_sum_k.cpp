////
////  17_count_subsets_with_sum_k.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 10/07/25.
////
//
//#include "bits/stdc++.h"
//
//using namespace std;
//
////recursive + memo
//
////int f(vector<int>& arr,int target,int i,vector<vector<int>>& dp){
////    
////    if(i == 0){
////        if(target==0 && arr[0] == 0)return 2;
////        if(target == 0) return 1;
////        if(arr[0] == target)return 1;
////        return 0;
////    }
////    
////    if(i<0 || target<0)return 0;
////    
////    if(dp[i][target] != -1)return dp[i][target];
////    
////    int take = f(arr,target-arr[i],i-1,dp);
////    int notTake = f(arr,target,i-1,dp);
////    
////    return dp[i][target] = take + notTake;
////}
////
////int perfectSum(vector<int>& arr, int target) {
////    
////    vector<vector<int>>dp(arr.size(),vector<int>(target+1,-1));
////    
////    return f(arr,target,arr.size()-1,dp);
////}
//
//
////watch dp 18 code for tabulation code
////tabulation
////int perfectSum(vector<int>& arr, int target) {
////    
////    vector<vector<int>>dp(arr.size(),vector<int>(target+1,0));
////    
////    //base case
////    if(arr[0] == 0)dp[0][0] = 2;
////    else dp[0][0] = 1;
////    
////    //if first element is not zero but remaning target
////    if(arr[0] <= target && arr[0] != 0)dp[0][arr[0]] = 1;
////    
////    for(int i = 1; i<arr.size() ; i++){
////        for(int k = 0 ; k<=target ; k++){
////            
////            int take = 0;
////            if(i>0 && k-arr[i]>=0)take = dp[i-1][k-arr[i]];
////            
////            int notTake = 0;
////            if(i>0)notTake = dp[i-1][k];
////            
////            dp[i][k] = max(dp[i][k],take + notTake);
////        }
////    }
////    
//////    for(auto i : dp){
//////        for(auto k : i){
//////            cout<<k<<" ";
//////        }
//////        cout<<endl;
//////    }
////    
////    return dp[arr.size()-1][target];
////}
//
//
////space optimization
//int perfectSum(vector<int>& arr, int target) {
//    
//    vector<int>prev(target+1,0);
//    
//    //base case
//    prev[0] = 1;
//    
//    if(arr[0] == 0)prev[0] = 2;
//    else prev[0] = 1;
//    
//    if(arr[0] <= target && arr[0] != 0)prev[arr[0]] = 1;
//    
//    for(int i = 1; i<arr.size() ; i++){
//        vector<int>curr(target+1,0);
//        for(int k = 0 ; k<=target ; k++){
//            
//            int take = 0;
//            if(i>0 && k-arr[i]>=0)take = prev[k-arr[i]];
//            
//            int notTake = 0;
//            if(i>0)notTake = prev[k];
//            
//            curr[k] = take + notTake;
//        }
//        prev = curr;
//    }
//    
////    for(auto i : dp){
////        for(auto k : i){
////            cout<<k<<" ";
////        }
////        cout<<endl;
////    }
//    
//    return prev[target];
//}
//
//int main(){
//    
//    vector<int>arr = {5, 2, 3, 10, 6, 8};
//    int target = 10;
//    
//    arr = {2, 5, 1, 4, 3};
//    target = 10;
//    
//    arr = {5,7,8};
//    target = 3;
//    
//    arr = {35, 2, 8, 22};
//    target = 0;
//
//    arr = {28, 4, 3, 27, 0, 24, 26};
//    target = 24;
//    
//    arr = {28, 4, 3, 27, 24, 0, 0, 0, 0, 12, 12, 26};
//    target = 24;
//    
//    arr = {0,0,1,2,0,0};
//    target = 2;
//    
////    arr = {0,2,0,5,3,4,0};
////    target = 7;
//    
//    cout<<perfectSum(arr, target)<<endl;
//    
//    return 0;
//}
