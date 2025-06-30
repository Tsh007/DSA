////
////  9_unique_pahts_2_try_again.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 23/12/24.
////
//
//#include "bits/stdc++.h"
//
//using namespace std;
//
////pure recursive solution
//
////int customFunc(vector<vector<int>>& obstacle,int i,int j){
////    if(i<0 || j<0)return 0;
////    
////    if(i==0 && j==0)return 1;
////    
////    if(obstacle[i][j]==1)return 0;
////    
////    int left = customFunc(obstacle, i-1, j);
////    
////    int up = customFunc(obstacle, i, j-1);
////    
////    return left+up;
////}
////
////int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
////    
////    return customFunc(obstacleGrid, obstacleGrid.size()-1, obstacleGrid[0].size()-1);
////}
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
////recursion + memoization == top down
//
////int customFunc(vector<vector<int>>& obstacle,vector<vector<int>>& dp,int i,int j){
////    
////    if(i<0 || j<0)return 0;
////    
////    if(obstacle[i][j] == 1)return 0;
////    
////    if(i==0 && j==0)return 1;
////    
////    if(dp[i][j] != -1)return dp[i][j];
////    
////    
////    int left = customFunc(obstacle, dp, i-1, j);
////    
////    int right = customFunc(obstacle, dp, i, j-1);
////    
////    return dp[i][j] = left + right;
////}
////
////int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
////    
////    vector<vector<int>>dp(obstacleGrid.size(),vector<int>(obstacleGrid[0].size(),-1));
////    
////    return customFunc(obstacleGrid,dp, obstacleGrid.size()-1, obstacleGrid[0].size()-1);
////}
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
////Tabulation == iterative + memoize == bottom up
//
////int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
////
////    int m = obstacleGrid.size();
////    int n = obstacleGrid[0].size();
////    
////    vector<vector<int>>dp(m,vector<int>(n,0));
////    
//////    dp[m][n] = 1;
////    
////    for(int i = 0; i<m ;i++){
////        if(obstacleGrid[i][0] == 1)break;
////        dp[i][0] = 1;
////    }
////    
////    for(int i = 0; i<n ;i++){
////        if(obstacleGrid[0][i] == 1)break;
////        dp[0][i] = 1;
////    }
////    
////    for(int i = 1 ;i<m;i++){
////        for(int j = 1;j<n;j++){
////            if(obstacleGrid[i][j] == 1){
////                dp[i][j] = 0;
////            }else{
////                
////                int left = dp[i-1][j];
////                
////                int right = dp[i][j-1];
////                
////                dp[i][j] = left + right;
////            }
////        }
////    }
////    
//////    for(auto i : dp){
//////        for(auto k : i){
//////            cout<<k<<" ";
//////        }
//////        cout<<endl;
//////    }
////    
////    return dp[m-1][n-1];
////}
//
//
//
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////space optimization
//
//int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
//
//    int m = obstacleGrid.size();
//    int n = obstacleGrid[0].size();
//    
////    vector<vector<int>>dp(m,vector<int>(n,0));
//    
////    dp[m][n] = 1;
//    
//    vector<int>temp(n,0);
//    
////    for(int i = 0; i<m ;i++){
////        if(obstacleGrid[i][0] == 1)break;
////        dp[i][0] = 1;
////    }
//    
//    for(int i = 0; i<n ;i++){
//        if(obstacleGrid[0][i] == 1)break;
//        temp[i] = 1;
//    }
//    
////    for(auto i : temp){
////        cout<<i<<" ";
////    }
////    cout<<endl;
//    
//    for(int i = 1 ;i<m;i++){
//        
//        vector<int>prev;
//        
//        prev = temp;
//        
//        for(int j = 0;j<n;j++){
//            if(obstacleGrid[i][j] == 1){
//                temp[j] = 0;
//            }else{
//                int left = 0;
//                if(j>0)left = temp[j-1];
//                
//                int right = prev[j];
//                
//                temp[j] = left + right;
//            }
//        }
//        
////        for(auto i : temp){
////            cout<<i<<" ";
////        }
////        cout<<endl;
//    }
//    
////    for(auto i : dp){
////        for(auto k : i){
////            cout<<k<<" ";
////        }
////        cout<<endl;
////    }
//    
//    return temp[n-1];
//}
//
//
//int main(){
//    
//    vector<vector<int>> obstacleGrid = {{0,0,0},{0,1,0},{0,0,0}};//2
//    
//    obstacleGrid = {{1}}; //0
//    
//        obstacleGrid = {{0,0,0,0},
//                        {0,1,0,0},
//                        {0,0,0,0},
//                        {0,0,1,0},
//                        {0,0,0,0}}; // 7
//    
//        obstacleGrid = {{0,1,0},
//                        {0,0,0},
//                        {0,0,0}};//3
//    
//    cout<<uniquePathsWithObstacles(obstacleGrid)<<endl;
//    
//    return 0;
//}
