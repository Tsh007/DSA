////
////  dp_14_retry.h
////  combinedDsa
////
////  Created by Tejash Singh on 08/07/25.
////
//
//#include "bits/stdc++.h"
//
//using namespace std;
//
//bool customFunc(vector<int>& arr,int sum,int n,int currSum){
//    if(currSum>sum)return 0;
//    if(currSum == sum)return 1;
//    if(n<0)return 0;
//    
//    bool take = customFunc(arr,sum,n-1,currSum + arr[n]);
//    
//    bool notTake = customFunc(arr,sum,n-1,currSum);
//    
//    return take || notTake;
//}
//
//
//
////memoization
//bool customFunc(vector<int>& arr,int sum,int n,int currSum,vector<vector<int>>& dp){
//    
////    cout<<currSum<<endl;
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
////tabulation
//
//bool customFunc(vector<int>& arr,int sum){
//    
//    vector<vector<int>>dp(arr.size(),vector<int>(sum,0));
//    
//    //no need of this base case already incoperated in loop below
//    //    for(int i = 0 ; i<arr.size();i++){
//    //        dp[i][target] = 1;
//    //    }
//    
//    for(int i = 0; i<arr.size() ; i++){
//        for(int k = 0; k<sum ; k++){
//            
//            bool take = 0;
//            if(i>0 && k+arr[i] < sum)take = dp[i-1][k + arr[i]];
//                
//            bool notTake = 0;
//            if(i>0)notTake = dp[i-1][k];
//                
//            dp[i][k] = take || notTake || k+arr[i] == sum || k == sum;
//
//        }
//    }
////        cout<<endl;
////        for(auto i : dp){
////            for(auto k : i){
////                cout<<k<<" ";
////            }
////            cout<<endl;
////        }
////    
////        cout<<endl;
//    
//    return dp[arr.size()-1][0];
//}
//
//
//
//
////space optimization
//bool customFunc(vector<int>& arr,int sum){
//    
//    vector<int>curr(sum,0);
//    vector<int>prev(sum,0);
//    
//    vector<vector<int>>dp(arr.size(),vector<int>(sum,0));
//    
//    for(int i = 0; i<arr.size() ; i++){
//        for(int k = 0; k<sum ; k++){
//            
//            bool take = 0;
//            if(i>0 && k+arr[i] < sum)take = prev[k + arr[i]];
//                
//            bool notTake = 0;
//            if(i>0)notTake = prev[k];
//                
//            curr[k] = take || notTake || k+arr[i] == sum || k == sum;
//
//        }
//        prev = curr;
//    }
//    
//    return prev[0];
//}
//
//
//int main(){
//    vector<int>arr = {3, 34, 4, 12, 5, 2};
//    int sum = 9;
//    
//    
//    arr = {3, 34, 4, 12, 5, 2};
//    sum = 30;
//    
//    arr = {1,2,3};
//    sum = 6;
//    
////    vector<vector<int>>dp(arr.size(),vector<int>(sum,-1));
////    cout<<customFunc(arr,sum,arr.size()-1,0,dp)<<endl;
////    
////    cout<<endl;
////    for(auto i : dp){
////        for(auto k : i){
////            cout<<k<<" ";
////        }
////        cout<<endl;
////    }
////    
////    cout<<endl;
//    
//    cout<<customFunc(arr,sum)<<endl;
//    return 0;
//}
