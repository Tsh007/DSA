////
////  23_unbounded_knapsack.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 31/07/25.
////
//
//#include "bits/stdc++.h"
//
//using namespace std;
//
////recursion + memo
//class Solution {
//    int customFunc(vector<int>& val,vector<int>& wt,int capacity,int i, vector<vector<int>>& dp){
//        if(i == 0){
//            if(capacity == 0)return 0;
//            
//            //below commented condition is wrong bcz its not nesessary to fill the full bag , just maximize the val
////            if(capacity%wt[0] == 0)
//            return (capacity/wt[0]) * val[0];
//        }
//        
//        if(dp[i][capacity] != -1)return dp[i][capacity];
//        
//        int take = 0;
//        if(capacity >= wt[i])take = val[i] + customFunc(val, wt, capacity - wt[i], i, dp);
//        
//        int notTake = customFunc(val, wt, capacity, i-1, dp);
//        
//        return dp[i][capacity] = max(take,notTake);
//    }
//  public:
//    int knapSack(vector<int>& val, vector<int>& wt, int capacity) {
//        
//        vector<vector<int>>dp(val.size(),vector<int>(capacity+1,-1));
//        
//        return customFunc(val, wt, capacity, wt.size()-1, dp);
//    }
//};
//
////tabulation
//class Solution1 {
//  public:
//    int knapSack(vector<int>& val, vector<int>& wt, int capacity) {
//        
//        vector<vector<int>>dp(val.size(),vector<int>(capacity+1,0));
//        
//        for(int k = 0; k<=capacity ; k++){
//            dp[0][k] = (k/wt[0]) * val[0];
//        }
//        dp[0][0] = 0;
//        
//        for(int i = 1; i<wt.size() ; i++){
//            for(int k = 0; k<=capacity ; k++){
//                int take = 0;
//                if(k >= wt[i])take = val[i] + dp[i][k - wt[i]];
//                
//                int notTake = dp[i-1][k];
//                
//                dp[i][k] = max(take,notTake);
//            }
//        }
//        
//        return dp[wt.size()-1][capacity];
//    }
//};
//
//
////space optimization O(2*capacity)
//class Solution2 {
//  public:
//    int knapSack(vector<int>& val, vector<int>& wt, int capacity) {
//        
//        vector<int>prev(capacity+1,0),curr(capacity+1,0);
//        
//        for(int k = 0; k<=capacity ; k++){
//            prev[k] = (k/wt[0]) * val[0];
//        }
//        prev[0] = 0;
//        
//        for(int i = 1; i<wt.size() ; i++){
//            for(int k = 0; k<=capacity ; k++){
//                int take = 0;
//                if(k >= wt[i])take = val[i] + curr[k - wt[i]];
//                
//                int notTake = prev[k];
//                
//                curr[k] = max(take,notTake);
//            }
//            prev = curr;
//        }
//        
//        return prev[capacity];
//    }
//};
//
////space optimization O(capacity)
//class Solution3 {
//  public:
//    int knapSack(vector<int>& val, vector<int>& wt, int capacity) {
//        
//        vector<int>prev(capacity+1,0),curr(capacity+1,0);
//        
//        for(int k = 0; k<=capacity ; k++){
//            prev[k] = (k/wt[0]) * val[0];
//        }
//        prev[0] = 0;
//        
//        for(int i = 1; i<wt.size() ; i++){
//            for(int k = 0; k<=capacity ; k++){
//                int take = 0;
//                if(k >= wt[i])take = val[i] + curr[k - wt[i]];
//                
//                int notTake = prev[k];
//                
//                curr[k] = max(take,notTake);
//            }
//            prev = curr;
//        }
//        
//        return prev[capacity];
//    }
//};
//
//
//
//int main(){
//    
//    vector<int>val = {1,1};
//    vector<int>wt = {2,1};
//    int capacity = 3;
//    
////    val = {6, 1, 7, 7};
////    wt = {1,3,4,5};
////    capacity = 8;
//    
////    val = {6, 8, 7, 100};
////    wt = {2, 3, 4, 5};
////    capacity = 1;
//    
////    val = {82,20,56};
////    wt = {4,52,46};
////    capacity = 75;
//    
//    Solution3 sol;
//    
//    cout<<sol.knapSack(val, wt, capacity)<<endl;
//    
//    
//    return 0;
//}
