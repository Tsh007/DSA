////
////  10_minimum_path_sum.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 26/12/24.
////
//
//#include "bits/stdc++.h"
//
//using namespace std;
//
//
//
////MARK: - Pure recursive solution
//
////int customFunc(vector<vector<int>>& grid,int i,int j){
////    
////    if(i<0 || j<0)return INT_MAX;
////    
////    if(i==0 && j==0)return grid[0][0];
////    
////    int upSum = customFunc(grid, i-1, j);
////    
////    int leftSum = customFunc(grid, i, j-1);
////    
////    return grid[i][j] + min(upSum,leftSum);
////    
////}
////
////int minPathSum(vector<vector<int>>& grid) {
////    
////    return customFunc(grid, grid.size()-1, grid[0].size()-1);
////    
////}
//
////MARK: - Recursion + memoization == top down
//
////int customFunc(vector<vector<int>>& dp,vector<vector<int>>& grid,int i,int j){
////    
////    if(i<0 || j<0)return INT_MAX;
////    
////    if(i==0 && j==0)return grid[0][0];
////    
////    if(dp[i][j]!=-1)return dp[i][j];
////    
////    int upSum = customFunc(dp,grid, i-1, j);
////    
////    int leftSum = customFunc(dp,grid, i, j-1);
////    
////    return dp[i][j] = grid[i][j] + min(upSum,leftSum);
////    
////}
////
////int minPathSum(vector<vector<int>>& grid) {
////    
////    vector<vector<int>>dp(grid.size(),vector<int>(grid[0].size(),-1));
////    
////    return customFunc(dp,grid, grid.size()-1, grid[0].size()-1);
////    
////}
//
//
////MARK: - Tabulation == Bottom up == Iteration + memoization
//
////int minPathSum(vector<vector<int>>& grid) {
////    
////    vector<vector<int>>dp(grid.size(),vector<int>(grid[0].size(),-1));
////    
////    dp[0][0] = grid[0][0];
////    
////    for(int i = 0;i<grid.size();i++){
////        for(int j = 0;j<grid[0].size();j++){
////            
////            if(i==0 && j==0){
////                dp[i][j] = grid[i][j];
////            }else{
////                
////                int up = INT_MAX;
////                if(i>0) up = dp[i-1][j];
////                
////                int left = INT_MAX;
////                if(j>0) left = dp[i][j-1];
////                
////                dp[i][j] = min(up,left) + grid[i][j];
////            }
////        }
////    }
////    
////    
//////    int x = customFunc(dp,grid, grid.size()-1, grid[0].size()-1);
////    
//////    for(auto i : dp){
//////        for(auto k : i){
//////            cout<<k<<" ";
//////        }
//////        cout<<endl;
//////    }
////    
////    return dp[grid.size()-1][grid[0].size()-1];
////    
////    
////}
//
//
////MARK: - Space optimization
//
//int minPathSum(vector<vector<int>>& grid) {
//    
////    vector<vector<int>>dp(grid.size(),vector<int>(grid[0].size(),-1));
//    
////    dp[0][0] = grid[0][0];
//    
//    vector<int>temp(grid[0].size(),0);
//    
//    for(int i = 0;i<grid.size();i++){
//        
//        vector<int>prev;
//        prev=temp;
//        
//        for(int j = 0;j<grid[0].size();j++){
//            
//            if(i==0 && j==0){
//                temp[i] = grid[i][j];
//            }else{
//                
//                int up = INT_MAX;
//                if(i>0) up = prev[j];
//                
//                int left = INT_MAX;
//                if(j>0) left = temp[j-1];
//                
//                temp[j] = min(up,left) + grid[i][j];
//            }
//        }
//    }
//    
//    
////    int x = customFunc(dp,grid, grid.size()-1, grid[0].size()-1);
//    
////    for(auto i : dp){
////        for(auto k : i){
////            cout<<k<<" ";
////        }
////        cout<<endl;
////    }
//    
//    return temp[grid[0].size()-1];
//    
//    
//}
//
//int main(){
//    
//    vector<vector<int>> grid = {{1,3,1},
//                                {1,5,1},
//                                {4,2,1}};
//    
//    grid = {{1,2,3},{4,5,6}};
//    
//    cout<<minPathSum(grid)<<endl;
//    
//    return 0;
//}
