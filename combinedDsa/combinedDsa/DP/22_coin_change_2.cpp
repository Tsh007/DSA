////
////  22_coin_change_2.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 31/07/25.
////
//
//#include "bits/stdc++.h"
//
//using namespace std;
//
//
////recursive
//class Solution {
//    int findWays(int idx, int amount, vector<int>& coins){
//        
//        if(amount < 0)return 0;
//        
//        if(idx == 0){
//            if(amount == 0)return 1;
//            if(amount % coins[0] == 0)return 1;
//            return 0;
//        }
//        
//        int take = findWays(idx, amount-coins[idx], coins);
//        
//        int notTake = findWays(idx-1,amount,coins);
//        
//        return take + notTake;
//    }
//public:
//    int change(int amount, vector<int>& coins) {
//        return findWays(coins.size()-1, amount, coins);
//    }
//};
//
//
////recursive + memo
//class Solution1 {
//    int findWays(int idx, int amount, vector<int>& coins, vector<vector<int>>& dp){
//        
//        if(amount < 0)return 0;
//        
//        if(idx == 0){
//            if(amount == 0)return 1;
//            if(amount % coins[0] == 0)return 1;
//            return 0;
//        }
//        
//        if(dp[idx][amount] != -1)return dp[idx][amount];
//        
//        int take = findWays(idx, amount-coins[idx], coins, dp);
//        
//        int notTake = findWays(idx-1,amount,coins, dp);
//        
//        return dp[idx][amount] = take + notTake;
//    }
//public:
//    int change(int amount, vector<int>& coins) {
//        
//        vector<vector<int>>dp(coins.size(),vector<int>(amount+1,-1));
//        
//        return findWays(coins.size()-1, amount, coins, dp);
//    }
//};
//
//
////tabulation
//class Solution2 {
//public:
//    using ull = unsigned long long;
//    int change(int amount, vector<int>& coins) {
//        
//        vector<vector<ull>>dp(coins.size(),vector<ull>(amount+1,0));
//        
//        dp[0][0] = 1;
//        for(int k = 0; k<=amount ; k++){
//            if(k%coins[0] == 0)dp[0][k] = 1;
//        }
//        
//        for(int i = 1; i<coins.size() ; i++){
//            for(int k = 0; k<=amount; k++){
//                
//                ull take = 0;
//                if(k >= coins[i])take = dp[i][k-coins[i]];
//                
//                ull notTake = dp[i-1][k];
//                
//                dp[i][k] = take + notTake;
//            }
//        }
//        
//        return dp[coins.size()-1][amount];
//    }
//};
//
////space optimization
//class Solution3 {
//public:
//    using ull = unsigned long long;
//    int change(int amount, vector<int>& coins) {
//        
////        vector<vector<ull>>dp(coins.size(),vector<ull>(amount+1,0));
//        vector<ull>prev(amount+1,0),curr(amount+1,0);
//        
//        prev[0] = 1;
//        for(int k = 0; k<=amount ; k++){
//            if(k%coins[0] == 0)prev[k] = 1;
//        }
//        
//        for(int i = 1; i<coins.size() ; i++){
//            for(int k = 0; k<=amount; k++){
//                
//                ull take = 0;
//                if(k >= coins[i])take = curr[k-coins[i]];
//                
//                ull notTake = prev[k];
//                
//                curr[k] = take + notTake;
//            }
//            prev = curr;
//        }
//        
//        return prev[amount];
//    }
//};
//
//
//int main(){
//    int amount = 5;
//    vector<int>coins = {1,2,5};
////    
////    amount = 3;
////    coins = {2};
////    
////    amount = 10;
////    coins = {10};
////
//    Solution3 sol;
//    
//    cout<<sol.change(amount,coins)<<endl;
//    
//    return 0;
//}
