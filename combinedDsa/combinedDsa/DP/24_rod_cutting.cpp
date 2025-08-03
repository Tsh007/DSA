////
////  24_rod_cutting.cpp
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
////recursion + memo
//class Solution {
//    int customFunc(vector<int>& price,int i,int avail,vector<vector<int>>& dp){
//        
//        if(i == 0){
//            if(avail == 0)return 0;
//            return avail * price[0];
//        }
//        
//        if(dp[i][avail]!=-1)return dp[i][avail];
//        
//        int take = 0;
//        if(avail >= i+1)take = price[i] + customFunc(price, i, avail - i - 1, dp);
//        
//        int notTake = customFunc(price, i-1, avail, dp);
//        
//        return dp[i][avail] = max(take,notTake);
//    }
//  public:
//    int cutRod(vector<int> &price) {
//        
//        vector<vector<int>>dp(price.size(),vector<int>(price.size()+1,-1));
//        
//        return customFunc(price,price.size()-1,price.size(),dp);
//    }
//};
//
//
////tabulation
//class Solution1 {
//  public:
//    int cutRod(vector<int> &price) {
//        
//        vector<vector<int>>dp(price.size(),vector<int>(price.size()+1,0));
//        
//        for(int j = 0; j<=price.size() ; j++){
//            dp[0][j] = j*price[0];
//        }
//        
//        for(int i = 1; i<price.size() ; i++){
//            for(int j = 0; j<=price.size() ; j++){
//                
//                int take = 0;
//                if(j >= i + 1)take = price[i] + dp[i][j - i - 1];
//                
//                int notTake = dp[i-1][j];
//                
//                dp[i][j] = max(take,notTake);
//            }
//        }
//        return dp[price.size()-1][price.size()];
//    }
//};
//
////space optimization
//class Solution2 {
//  public:
//    int cutRod(vector<int> &price) {
//        
////        vector<vector<int>>dp(price.size(),vector<int>(price.size()+1,0));
//        vector<int>prev(price.size()+1,0),curr(price.size()+1,0);
//        
//        for(int j = 0; j<=price.size() ; j++){
//            prev[j] = j*price[0];
//        }
//        
//        for(int i = 1; i<price.size() ; i++){
//            for(int j = 0; j<=price.size() ; j++){
//                
//                int take = 0;
//                if(j >= i + 1)take = price[i] + curr[j - i - 1];
//                
//                int notTake = prev[j];
//                
//                curr[j] = max(take,notTake);
//            }
//            prev = curr;
//        }
//        return prev[price.size()];
//    }
//};
//
//
////space optimization -- optimal
//class Solution3 {
//  public:
//    int cutRod(vector<int> &price) {
//        vector<int>prev(price.size()+1,0);
//        
//        for(int j = 0; j<=price.size() ; j++){
//            prev[j] = j*price[0];
//        }
//        
//        for(int i = 1; i<price.size() ; i++){
//            for(int j = 0; j<=price.size() ; j++){
//                
//                int take = 0;
//                if(j >= i + 1)take = price[i] + prev[j - i - 1];
//                
//                int notTake = prev[j];
//                
//                prev[j] = max(take,notTake);
//            }
//        }
//        return prev[price.size()];
//    }
//};
//
//int main(){
//    
//    vector<int>prices = {1, 5, 8, 9, 10, 17, 17, 20};
//    
////    prices = {1,5,8};
////    
////    prices = {3};
////    
////    prices = {3, 5, 8, 9, 10, 17, 17, 20}; // 24
////    
////    prices = {3,5,8};
//    
//    Solution2 sol;
//    
//    cout<<sol.cutRod(prices)<<endl;
//    
//    return 0;
//}
