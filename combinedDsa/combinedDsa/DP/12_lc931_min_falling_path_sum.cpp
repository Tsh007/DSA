////
////  12_lc931_min_falling_path_sum.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 01/01/25.
////
//
//#include "bits/stdc++.h"
//
//using namespace std;
//
////int customFunc(vector<vector<int>>& matrix,int i,int j){
////    
////    if(i>=matrix.size() || j>=matrix.size() || j<0)return INT_MAX;
////    
////    if(i==matrix.size()-1)return matrix[i][j];
////    
////    int below = customFunc(matrix, i+1, j);
////    
////    int dLeft = customFunc(matrix, i+1, j-1);
////    
////    int dRight = customFunc(matrix, i+1, j+1);
////    
////    return matrix[i][j] + min({below,dLeft,dRight});
////    
////}
////
////
////int minFallingPathSum(vector<vector<int>>& matrix) {
////    
////    int ans = INT_MAX;
////    
////    for(int i = 0;i<matrix.size();i++){
////        ans = min(customFunc(matrix, 0, i),ans);
////    }
////    
////    return ans;
////    
////}
//
//
////recursion + memoization == top down
//
////int customFunc(vector<vector<int>>& matrix,int i,int j,vector<vector<int>>& dp){
////    
////    if(i>=matrix.size() || j>=matrix.size() || j<0)return INT_MAX;
////    
////    if(i==matrix.size()-1)return matrix[i][j];
////    
////    if(dp[i][j] != -1)return dp[i][j];
////    
////    int below = customFunc(matrix, i+1, j,dp);
////    
////    int dLeft = customFunc(matrix, i+1, j-1,dp);
////    
////    int dRight = customFunc(matrix, i+1, j+1,dp);
////    
////    return dp[i][j] = matrix[i][j] + min({below,dLeft,dRight});
////    
////}
////
////
////int minFallingPathSum(vector<vector<int>>& matrix) {
////    
////    int ans = INT_MAX;
////    
////    vector<vector<int>>dp(matrix.size(),vector<int>(matrix.size(),-1));
////    
////    for(int i = 0;i<matrix.size();i++){
////        ans = min(customFunc(matrix, 0, i,dp),ans);
////    }
////    
////    return ans;
////    
////}
//
//
////tabulation == bottom up == iterative + memoization
//
////int minFallingPathSum(vector<vector<int>>& matrix) {
////
////    int ans = INT_MAX;
////
////    vector<vector<int>>dp(matrix.size(),vector<int>(matrix.size(),-1));
////    
////    for(int i = 0 ; i<matrix.size();i++){
////        dp[matrix.size()-1][i] = matrix[matrix.size()-1][i];
////    }
////    
////    for(int i = matrix.size()-2;i>=0;i--){
////        for(int j = 0 ; j<matrix.size();j++){
////            
////            int below = dp[i+1][j];
////
////            int dLeft = INT_MAX;
////            if(j>0) dLeft = dp[i+1][j-1];
////
////            int dRight = INT_MAX;
////            if(j<matrix.size()-1)dRight = dp[i+1][j+1];
////
////            dp[i][j] = matrix[i][j] + min({below,dLeft,dRight});
////        }
////    }
////
////    for(int i = 0;i<matrix.size();i++){
////        ans = min(dp[0][i],ans);
////    }
////
////    return ans;
////
////}
//
//
////space optimize
//int minFallingPathSum(vector<vector<int>>& matrix) {
//
//    int ans = INT_MAX;
//    
//
////    vector<vector<int>>dp(matrix.size(),vector<int>(matrix.size(),-1));
//    
//    vector<int>curr = matrix[matrix.size()-1];
//
////    for(int i = 0 ; i<matrix.size();i++){
////        dp[matrix.size()-1][i] = matrix[matrix.size()-1][i];
////    }
//
//    for(int i = matrix.size()-2;i>=0;i--){
//        
//        vector<int> temp = curr;
//        
//        for(int j = 0 ; j<matrix.size();j++){
//
//            int below = temp[j];
//
//            int dLeft = INT_MAX;
//            if(j>0) dLeft = temp[j-1];
//
//            int dRight = INT_MAX;
//            if(j<matrix.size()-1)dRight = temp[j+1];
//
//            curr[j] = matrix[i][j] + min({below,dLeft,dRight});
//        }
//    }
//
//    for(int i = 0;i<matrix.size();i++){
//        ans = min(curr[i],ans);
//    }
//
//    return ans;
//
//}
//
//int main(){
//    
//    vector<vector<int>> matrix = {  {2,1,3},
//                                    {6,5,4},
//                                    {7,8,9}};//13
//
////    matrix = {{-19,57},{-40,-5}};//-59
//    
//    cout<<minFallingPathSum(matrix)<<endl;
//    
//    return 0;
//}
