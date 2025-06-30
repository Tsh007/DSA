////
////  3_frog_jump.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 15/10/24.
////
//
//#include <stdio.h>
//#include "bits/stdc++.h"
//
//using namespace std;
//
////int customFunc(vector<int>&height,int n,int prev){
////    
////    if(n>=height.size())return INT_MAX;
////    
////    if(n == height.size() - 1)return abs(height[n]-prev);
////    
////    int x = customFunc(height, n+1, height[n]);
////    
////    int y = customFunc(height, n+2, height[n]);
////    
////    if(n==0)return min(x,y);
////    return min(x+llabs(height[n]-prev),y+llabs(height[n]-prev));
////    
////}
////
////int minimumEnergy(vector<int>& height, int n) {
////    
////    
////    return customFunc(height, 0, 0);
////}
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////optimising
//////the above code can't be optimised
////int customFunc(vector<int>&height,int n){
////    if(n>=height.size())return INT_MAX;
////    if(n==height.size() - 1)return height[n];
////    
////    int x = customFunc(height,n+1);
////    int y = customFunc(height,n+2);
////    
////    int ans;
////    
////    if(n+2 < height.size()-1){
////        ans = min(x + llabs(height[n+1] - height[n]),y + llabs(height[n+2] - height[n]));
////    }else if(n+1 < height.size()-1){
////        ans = min(x + llabs(height[n+1] - height[n]),llabs(height[n] - y));
////    }else{
////        ans = min(llabs(height[n] - x),llabs(height[n] - y));
////    }
////    
//////    cout<<ans<<" ";
////    
////    return ans;
////}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////top down approach
////int customFunc(vector<int>&height,int n,vector<int>&dp){
////    if(n>=height.size())return INT_MAX;
////    if(n==height.size() - 1)return height[n];
////    
////    
////    if(dp[n] != -1)return dp[n];
////    
////    int x = customFunc(height,n+1,dp);
////    int y = customFunc(height,n+2,dp);
////    
////    int ans;
////    
////    if(n+2 < height.size()-1){
////        ans = min(x + llabs(height[n+1] - height[n]),y + llabs(height[n+2] - height[n]));
////    }else if(n+1 < height.size()-1){
////        ans = min(x + llabs(height[n+1] - height[n]),llabs(height[n] - y));
////    }else{
////        ans = min(llabs(height[n] - x),llabs(height[n] - y));
////    }
////    
////    dp[n] = ans;
////    cout<<ans<<" ";
////    
////    return ans;
////}
////
////int minimumEnergy(vector<int>& height, int n) {
////
////    vector<int>dp(n+1,-1);
////
////    if(n==1)return 0;
////    
////    int ans = customFunc(height, 0, dp);
////
////    return ans;
////}
//
//
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////bottom up approach
////int minimumEnergy(vector<int>& height, int n) {
////
////    vector<int>dp(n+1,-1);
////    
////    if(n==1)return 0;
////    
////    dp[n-1] = height[n-1];
////    dp[n] = INT_MAX;
//////    dp[n+1] = INT_MAX;
////
////    for(int i = n-2;i>=0;i--){
////        
////        if(i+2 < height.size()-1){
////            dp[i] = min(dp[i+1] + llabs(height[i+1] - height[i]),dp[i+2] + llabs(height[i+2] - height[i]));
////        }else if(i+1 < height.size()-1){
////            dp[i] = min(dp[i+1] + llabs(height[i+1] - height[i]),llabs(height[i] - dp[i+2]));
////        }else{
////            dp[i] = min(llabs(height[i] - dp[i+1]),llabs(height[i] - dp[i+2]));
////        }
////        
//////        cout<<dp[i]<<" ";
////        
////    }
////    
////    return dp[0];
////}
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////space optimization
//int minimumEnergy(vector<int>& height, int n) {
//
////    vector<int>dp(n+1,-1);
//    
//    if(n==1)return 0;
//    
//    int prev1 = height[n-1];
//    int prev2 = INT_MAX;
////    dp[n+1] = INT_MAX;
//
//    for(int i = n-2;i>=0;i--){
//        int curr;
//        
//        if(i+2 < height.size()-1){
//            curr = min(prev1 + llabs(height[i+1] - height[i]),prev2 + llabs(height[i+2] - height[i]));
//        }else if(i+1 < height.size()-1){
//            curr = min(prev1 + llabs(height[i+1] - height[i]),llabs(height[i] - prev2));
//        }else{
//            curr = min(llabs(height[i] - prev1),llabs(height[i] - prev2));
//        }
//            
//        prev2 = prev1;
//        prev1 = curr;
////        cout<<dp[i]<<" ";
//        
//    }
//    
//    return prev1;
//}
//
//int main(){
//    
//    vector<int>height = {10,20,30,10};
//    
//    height = {50,60,70,80,10};///ans = 80
//    
//    height = {10,50,10};
//    
//    cout<<minimumEnergy(height, height.size())<<endl;
//    
//    return 0;
//}
