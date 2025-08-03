////
////  20_minimum_coins.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 28/07/25.
////
//
//#include "bits/stdc++.h"
//
//using namespace std;
//
//
////recursive
//class Solution {
//    int minCoins(vector<int>& coins,int amount,int i){
//        
//        if(amount == 0) return 0;
//        
//        if(i == 0){
//            if(amount % coins[0] == 0)return amount/coins[0];
//            return INT_MAX;
//        }
//        
//        int take = INT_MAX;
//        if(amount >= coins[i])take = minCoins(coins,amount-coins[i],i);
//        if(take != INT_MAX)take++;
//        
//        int notTake = minCoins(coins,amount,i-1);
//        
//        return min(take,notTake);
//    }
//public:
//    int coinChange(vector<int>& coins, int amount) {
//        int numberOfCoins = minCoins(coins,amount,coins.size()-1);
//        
//        if(numberOfCoins != INT_MAX)return numberOfCoins;
//        return -1;
//    }
//};
//
//
////recursive + memo
//class Solution2 {
//    int minCoins(vector<int>& coins,int amount,int i, vector<vector<int>>& dp){
//        
//        if(amount == 0) return 0;
//        
//        if(i == 0){
//            if(amount % coins[0] == 0)return amount/coins[0];
//            return INT_MAX;
//        }
//        
//        if(dp[i][amount] != -1)return dp[i][amount];
//        
//        int take = INT_MAX;
//        if(amount >= coins[i])take = minCoins(coins,amount-coins[i],i,dp);
//        if(take != INT_MAX)take++;
//        
//        int notTake = minCoins(coins,amount,i-1,dp);
//        
//        return dp[i][amount] = min(take,notTake);
//    }
//public:
//    int coinChange(vector<int>& coins, int amount) {
//        
//        vector<vector<int>>dp(coins.size(),vector<int>(amount+1,-1));
//        
//        int numberOfCoins = minCoins(coins,amount,coins.size()-1,dp);
//        
//        if(numberOfCoins != INT_MAX)return numberOfCoins;
//        return -1;
//    }
//};
//
//
////tabulation
//class Solution3 {
//public:
//    int coinChange(vector<int>& coins, int amount) {
//        
//        vector<vector<int>>dp(coins.size(),vector<int>(amount+1,INT_MAX));
//        
//        for(int j = 0; j<=amount ; j++){
//            if(j%coins[0] == 0)dp[0][j] = j/coins[0];
//        }
//        
//        for(int i = 1; i<coins.size() ; i++){
//            for(int j = 0; j<=amount ; j++){
//                
//                int take = INT_MAX;
//                if(j >= coins[i])take = dp[i][j-coins[i]];
//                if(take != INT_MAX)take++;
//                
//                int notTake = dp[i-1][j];
//                
//                dp[i][j] = min(take,notTake);
//            }
//        }
//        
//        int numberOfCoins = dp[coins.size()-1][amount];
//        
//        if(numberOfCoins != INT_MAX)return numberOfCoins;
//        return -1;
//    }
//};
//
////space optimization
//class Solution4 {
//public:
//    int coinChange(vector<int>& coins, int amount) {
//        
////        vector<vector<int>>dp(coins.size(),vector<int>(amount+1,INT_MAX));
//        
//        vector<int>prev(amount+1,INT_MAX);
//        
//        for(int j = 0; j<=amount ; j++){
//            if(j%coins[0] == 0)prev[j] = j/coins[0];
//        }
//        
//        for(int i = 1; i<coins.size() ; i++){
//            vector<int>curr(amount+1,INT_MAX);
//            for(int j = 0; j<=amount ; j++){
//                
//                int take = INT_MAX;
//                if(j >= coins[i])take = curr[j-coins[i]];
//                if(take != INT_MAX)take++;
//                
//                int notTake = prev[j];
//                
//                curr[j] = min(take,notTake);
//            }
//            prev = curr;
//        }
//        
//        int numberOfCoins = prev[amount];
//        
//        if(numberOfCoins != INT_MAX)return numberOfCoins;
//        return -1;
//    }
//};
//
//
//
//
//int main(){
//    
//    vector<int>coins = {186,419,83,408};
//    int amount = 6249;//ans = 20
//    
////    coins = {1,2,5};
////    amount = 11;
////    
////    coins = {2};
////    amount = 3;
////    
////    coins = {1};
////    amount = 0;
////    
////    coins = {2,5,10,1};
////    amount = 27;
//    
//    Solution4 sol;
//    
//    cout<<sol.coinChange(coins, amount)<<endl;
//    
//    
//    return 0;
//}
