////
////  check_if_subsequence_exist.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 27/09/24.
////
//
//#include <stdio.h>
//#include "bits/stdc++.h"
//
//
//using namespace std;
//
//
//bool customFunc(int n, int k, vector<int> &a,int sum,int idx,vector<vector<int>>&dp){
//    // if(flag)return;
//
//    if(sum>k){
//        return false;
//    }
//
//    if(sum == k){
//        return true;
//    }
//
//    if(idx >= n)return false;
//
//    if(dp[idx][sum] != -1){
//        return dp[idx][sum];
//    }
//
//    //not take
//    if(customFunc(n,k,a,sum,idx+1,dp)){
//        return dp[idx][sum] = true;
//    }
//
//    //take
//    if(customFunc(n,k,a,sum+a[idx],idx+1,dp)){
//        return dp[idx][sum] = true;
//    }
//
//    return dp[idx][sum] = false;
//
//}
//
//bool isSubsetPresent(int n, int k, vector<int> &a)
//{
//    // Write your code here
//    // bool ans = false;
//
//    vector<vector<int>> dp(n,vector<int>(k+1,-1));
//    
//    return customFunc(n,k,a,0,0,dp);
//
//    // return ans;
//}
//
//int main(){
////    5 14
////    4 2 5 6 7
//    vector<int> ans = {4,2,5,6,7};
//    cout<<isSubsetPresent(5,14, ans)<<endl;
//    return 0;
//}
