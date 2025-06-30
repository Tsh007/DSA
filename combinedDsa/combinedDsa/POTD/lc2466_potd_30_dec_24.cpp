//
//  lc2499_potd_30_dec_34.cpp
//  combinedDsa
//
//  Created by Tejash Singh on 30/12/24.
//
//
//#include "bits/stdc++.h"
//
//using namespace std;

//did just recursion + memoization => do tabulation and space optimization later on 

//int customFunc(int low,int high,int zero,int one,int idx,vector<int>& dp){
//    
//    if(idx > high)  return 0;
//    
//    if(idx == high) return 1;
//    
//    int takeZero = 0;
//    
//    int takeOne = 0;
//    
//    if(dp[idx] != -1)return dp[idx];
//    
//    takeZero = customFunc(low, high, zero, one, idx+zero,dp);
//    takeOne = customFunc(low,high,zero,one,idx+one,dp);
//    
//    
//    if(idx >= low) return takeOne + takeZero + 1;
//    
//    return dp[idx] = takeOne + takeZero;
//}
//
//int countGoodStrings(int low, int high, int zero, int one) {
//    
//    vector<int>dp(high,-1);
//    
//    return customFunc(low, high, zero, one, 0, dp);
//    
//}


//
//
//
//int main(){
//    
//    int low = 3;
//    int high = 3;
//    int zero = 1;
//    int one = 1;//8
//    
////    low = 2; high = 3; zero = 1; one = 2;//5
//    
////    low = 17; high = 43; zero = 16; one = 11;//11
//    
//    cout<<countGoodStrings(low, high, zero, one)<<endl;
//    
//    return 0;
//}
