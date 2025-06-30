////
////  7_ninja_training.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 05/11/24.
////
//
//#include <stdio.h>
//#include "bits/stdc++.h"
//
//
//using namespace std;
//
////int customFunc(vector<vector<int>>& arr,int n,int prev){
////    
////    if(n<0)return 0;
////    
////    int sum = 0;
////    for(int i = 0;i<3;i++){
////        if(prev == i)continue;
////        int pick = arr[n][i] + customFunc(arr,n-1,i);
////        sum = max(sum,pick);
////    }
////    
////    return sum;
////}
////
////int maximumPoints(vector<vector<int>>& arr, int n) {
////        // Code here
////    return customFunc(arr, n-1, -1);
////}
//
//
////recursive + memoisation == top down approach
////int customFunc(vector<vector<int>>& arr,int n,int prev,vector<vector<int>>& dp){
////    
////    if(n<0)return 0;
////    
////    if(dp[n][prev]!=-1 && dp[n][prev]!=0)return dp[n][prev];
////    
////    int sum = 0;
////    for(int i = 0;i<3;i++){
////        if(prev == i)continue;
////        int pick = arr[n][i] + customFunc(arr,n-1,i,dp);
////        sum = max(sum,pick);
////        
//////        cout<<pick<<" ";
////    }
////    if(prev == -1)return sum;
////    return dp[n][prev] = sum;
////}
//////
////int maximumPoints(vector<vector<int>>& arr, int n) {
////        // Code here
////    
////    vector<vector<int>>dp(arr.size()+1,vector<int>(arr.size()+1,-1));
////    int x = customFunc(arr, n-1, -1,dp);
////    
//////    for(auto i : dp){
//////        for(auto k : i){
//////            cout<<k<<" ";
//////        }
//////        cout<<endl;
//////    }
////    
////    return x;
////    
////}
//
//
//
//
////bottom up approach == tabulation == iterative + memoisation
////int maximumPoints(vector<vector<int>>& arr, int n) {
////    
////    vector<vector<int>>dp(arr.size(),vector<int>(3,0));
////    
////    int prev = -1;
//////    dp[0][0] = max(arr[0][1],arr[0][2]);
//////    dp[0][1] = max(arr[0][0],arr[0][2]);
//////    dp[0][2] = max(arr[0][0],arr[0][1]);
////    
////    for(int k=0;k<n;k++){
////        
//////        int sum = 0;
////        for(int j = 0;j<3;j++){
////            prev = j;
////            
////            int pick = 0;
////            int sum = 0;
////            
////            for(int i = 0;i<3;i++){
////                if(prev == i)continue;
////                
////                pick = arr[k][i];
////                 
////                if(k-1>=0)pick += dp[k-1][i];
////                
//////                if(pick>sum)prev = i;
////                sum = max(sum,pick);
////
////            }
////            
////            dp[k][j] = sum;
////            
////            
////        }
////        
////    }
////    
////    for(auto i : dp){
////        for(auto k : i){
////            cout<<k<<" ";
////        }
////        cout<<endl;
////    }
////    
////    int ans = INT_MIN;
////    for(int i = 0;i<3;i++){
////        if(dp[n-1][i]>ans)ans = dp[n-1][i];
////    }
////    return ans;
////}
//
//
//
////space optimise
//int maximumPoints(vector<vector<int>>& arr, int n) {
//
////    vector<vector<int>>dp(arr.size(),vector<int>(3,0));
////    vector<vector<int>>dp(2,vector<int>(3,0));
//    vector<int>dp(3,0);
//    
//    
//
//    int prev = -1;
////    dp[0][0] = max(arr[0][1],arr[0][2]);
////    dp[0][1] = max(arr[0][0],arr[0][2]);
////    dp[0][2] = max(arr[0][0],arr[0][1]);
//    
//    for(int k=0;k<n;k++){
//        
////        int sum = 0;
//        
//        vector<int>temp(3,0);
//        
//        for(int j = 0;j<3;j++){
//            prev = j;
//
//            int pick = 0;
//            int sum = 0;
//
//            for(int i = 0;i<3;i++){
//                if(prev == i)continue;
//
//                pick = arr[k][i];
//
//                if(k-1>=0)pick += dp[i];
//
////                if(pick>sum)prev = i;
//                sum = max(sum,pick);
//
//            }
//
//            temp[j] = sum;
//        }
//        
//        dp = temp;
//
//    }
//
////    for(auto i : dp){
////        for(auto k : i){
////            cout<<k<<" ";
////        }
////        cout<<endl;
////    }
//    
//
////    int ans = INT_MIN;
////    for(int i = 0;i<3;i++){
////        if(dp[n-1][i]>ans)ans = dp[n-1][i];
////    }
////    return ans;
//    int ans = INT_MIN;
//    
//    for(auto i : dp ){
//        if(i>ans)ans = i;
//    }
//    
//    return ans;
//}
//
//
//
//
//int main(){
//    
//    vector<vector<int>>arr = {  {1,2,5},
//                                {3,1,1},
//                                {3,3,3}};
//    
//    
//    arr = { {1,2,5},
//            {3,1,1},
//            {3,3,3},
//            {4,6,5}};
////    cout<<arr.size();
//    
////    arr = {
////        {7,6,1},
////        {3,9,7},
////        {1, 3, 5},
////        {9, 7, 6},
////        {1, 10, 1},
////        {1, 7, 2},
////        {4, 9, 10},
////        {4, 5, 5},
////        {7, 1, 7},
////        {7, 2, 9}
////    };
//    
//    cout<<maximumPoints(arr, arr.size())<<endl;
//    
//    
//    return 0;
//}
