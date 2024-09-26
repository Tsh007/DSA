////
////  count_number_of_subsequence_with_given_sum.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 14/09/24.
////
//
//#include <stdio.h>
//
//#include "bits/stdc++.h"
//
//using namespace std;
//
//
//int countSubWithSum(int target,int sum,int n,vector<int> arr,vector<vector<int>>& dp){
//    
//    if(sum > target)return 0;
//    
//    
//    
//    if(n == arr.size() && sum == target)return 1;
//    
//    
//    if(n == arr.size())return 0;
//    
//    if(dp[n][sum]  != -1) return dp[n][sum];
//    
//    //not include
//    int notInclude = countSubWithSum(target,sum,n+1,arr,dp);
//    
//    
//    int include = countSubWithSum(target, sum+arr[n], n+1, arr,dp);
//    
//    dp[n][sum] = notInclude + include;
//    
//    return dp[n][sum];
//    
//}
//
//int main(){
//    
////    int count = 0;
//    
//    vector<vector<int>> dp (3,vector<int>(4,-1));
//    
//    vector<int>arr = {1,2,1};
//    
//    cout<<countSubWithSum(3, 0, 0, arr,dp)<<endl;
//    
////    cout<<count<<endl;
//    
//    
//    return 0;
//}
//
//
////void countSubWithSum(int target,int sum,int n,vector<int> arr,int& count){
////    
////    if(sum > target)return;
////    
////    
////    
////    if(n == arr.size() && sum == target){
////        count++;
////        return;
////    }
////    
////    if(n == arr.size())return;
////    
////    
////    
////    //not include
////    countSubWithSum(target,sum,n+1,arr,count);
////    
//////    sub.push_back(arr[n]);
////    
////    countSubWithSum(target, sum+arr[n], n+1, arr, count);
////    
////}
////
////int main(){
////    
////    int count = 0;
////    
////    vector<int>arr = {2, 5, 1, 4, 3};
////    
//////    vector<int>sub;
////    
////    countSubWithSum(10, 0, 0, arr, count);
////    
////    cout<<count<<endl;
////    
////    
////    return 0;
////}
