////
////  19_zero_one_knapsack.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 25/07/25.
////
//
//#include "bits/stdc++.h"
//
//using namespace std;
//
////class Solution {
////    int customFunc(int w,int i,vector<int>& val,vector<int>& wt){
////        
////        if(i<0 || w<=0)return 0;
////        
////        int take = 0;
////        if(wt[i]<=w)take = val[i] + customFunc(w-wt[i], i-1, val, wt);
////        
////        int notTake = customFunc(w, i-1, val, wt);
////        
////        return max(take,notTake);
////    }
////    public:
////    int knapsack(int W, vector<int> &val, vector<int> &wt) {
////        return customFunc(W, val.size()-1, val, wt);
////    }
////};
//
//
////recursion + memo
//class Solution {
//    int customFunc(int w,int i,vector<int>& val,vector<int>& wt,vector<vector<int>>& dp){
//        
//        if(i<0 || w<=0)return 0;
//        
//        if(dp[i][w] != -1)return dp[i][w];
//        
//        int take = 0;
//        if(wt[i]<=w)take = val[i] + customFunc(w-wt[i], i-1, val, wt, dp);
//        
//        int notTake = customFunc(w, i-1, val, wt, dp);
//        
//        return dp[i][w] = max(take,notTake);
//    }
//    public:
//    int knapsack(int W, vector<int> &val, vector<int> &wt) {
//        
//        vector<vector<int>>dp(wt.size(),vector<int>(W+1,-1));
//        int ans = customFunc(W, val.size()-1, val, wt, dp);
//        
//        for(auto i : dp){
//            for(auto k : i){
//                cout<<k<<" ";
//            }
//            cout<<endl;
//        }
//        
//        return ans;
//    }
//};
//
//
//
//
////tabulation
//class Solution1 {
//    public:
//    int knapsack(int W, vector<int> &val, vector<int> &wt) {
//        
//        vector<vector<int>>dp(wt.size(),vector<int>(W+1,0));
//        
//        for(int k = 0; k<=W ; k++){
//            if(wt[0] <= k)dp[0][k] = val[0];
//        }
//        
//        for(int i = 1; i<val.size(); i++){
//            for(int k = 0; k<=W ; k++){
//                
//                int take = 0;
//                if(wt[i]<=k)take = val[i] + dp[i-1][k-wt[i]];
//                
//                int notTake = dp[i-1][k];
//                
//                dp[i][k] = max(take,notTake);
//            }
//        }
//        
////        for(auto i : dp){
////            for(auto k : i){
////                cout<<k<<" ";
////            }
////            cout<<endl;
////        }
//        
//        return dp[val.size()-1][W];
//    }
//};
//
//
////space optimzation O(2W)
//class Solution3 {
//    public:
//    int knapsack(int W, vector<int> &val, vector<int> &wt) {
//        
////        vector<vector<int>>dp(wt.size(),vector<int>(W+1,0));
//        vector<int>prev(W+1,0);
//        
//        for(int k = 0; k<=W ; k++){
//            if(wt[0] <= k)prev[k] = val[0];
//        }
//        
//        for(int i = 1; i<val.size(); i++){
//            vector<int>curr(W+1,0);
//            for(int k = 0; k<=W ; k++){
//                
//                int take = 0;
//                if(wt[i]<=k)take = val[i] + prev[k-wt[i]];
//                
//                int notTake = prev[k];
//                
//                curr[k] = max(take,notTake);
//            }
//            prev = curr;
//        }
//        
////        for(auto i : dp){
////            for(auto k : i){
////                cout<<k<<" ";
////            }
////            cout<<endl;
////        }
//        
//        return prev[W];
//    }
//};
//
//
//
////space optimization O(W)
//class Solution4{
//    public:
//    int knapsack(int W, vector<int> &val, vector<int> &wt) {
//        
////        vector<vector<int>>dp(wt.size(),vector<int>(W+1,0));
//        vector<int>prev(W+1,0);
//        
//        for(int k = 0; k<=W ; k++){
//            if(wt[0] <= k)prev[k] = val[0];
//        }
//        
//        for(int i = 1; i<val.size(); i++){
////            vector<int>curr(W+1,0);
//            for(int k = W; k>=0 ; k--){
//                
//                int take = 0;
//                if(wt[i]<=k)take = val[i] + prev[k-wt[i]];
//                
//                int notTake = prev[k];
//                
////                curr[k] = max(take,notTake);
//                prev[k] = max(take,notTake);
//                
//            }
////            prev = curr;
//        }
//        
////        for(auto i : dp){
////            for(auto k : i){
////                cout<<k<<" ";
////            }
////            cout<<endl;
////        }
//        
//        return prev[W];
//    }
//};
//
//
//int main(){
//    
//    vector<int>val = {1,2,3};
//    vector<int>wt = {4,5,1};
//    int w = 4;
////    
////    val = {1,2,3};
////    wt = {4,5,6};
////    w = 3;
////    
////    val = {10,40,30,50};
////    wt = {5,4,2,3};
////    w = 5;
//    
////    val = {10,8,6};
////    wt = {1,7,9};
////    w = 7;
//    
//    Solution4 mySol;
//    
//    cout<<mySol.knapsack(w, val, wt)<<endl;
//    
//    return 0;
//}
