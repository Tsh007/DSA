////
////  9_unique_paths_2.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 16/11/24.
////
//
//#include <stdio.h>
//
//
//#include "bits/stdc++.h"
//
//using namespace std;
//
////int customFunc(vector<vector<int>>& obstacleGrid, int currM, int currN){
////    
////    if(currM == 0 && currN == 0) return 1;
////    
////    if(currM < 0 || currN < 0) return 0;
////    
////    if(obstacleGrid[currM][currN] == 1)return 0;
////    
////    int right = customFunc(obstacleGrid, currM-1, currN);
////    
////    int left = customFunc(obstacleGrid, currM, currN-1);
////    
////    return left+right;
////}
////
////
////int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid){
////    
////    int m = obstacleGrid.size();
////    
////    int n = obstacleGrid[0].size();
////    
////        
////    return customFunc(obstacleGrid, m-1, n-1);
////    
////}
//
//
//
////recursion + memoise == top down
////int customFunc(vector<vector<int>>& obstacleGrid, int currM, int currN,vector<vector<int>>&dp){
////    
////    if(currM < 0 || currN < 0) return 0;
////    
////    if(obstacleGrid[currM][currN] == 1)return 0;
////    
////    if(currM == 0 && currN == 0) return 1;
////    
////    
////    if(dp[currM][currN] != -1)return dp[currM][currN];
////    
////    int right = customFunc(obstacleGrid, currM-1, currN,dp);
////    
////    int left = customFunc(obstacleGrid, currM, currN-1,dp);
////    
////    return dp[currM][currN] = left+right;
////}
////
////
////int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid){
////    
////    
////    
////    int m = obstacleGrid.size();
////    
////    int n = obstacleGrid[0].size();
////    
////    vector<vector<int>>dp(m,vector<int>(n,-1));
////        
////    return customFunc(obstacleGrid, m-1, n-1,dp);
////    
////}
//
//
//
//
//
//
////tabulation == bottom up == iteration + memoization
//
//int customFunc(vector<vector<int>>& obstacleGrid, int currM, int currN,vector<vector<int>>&dp){
//    
//    if(currM < 0 || currN < 0) return 0;
//    
//    if(obstacleGrid[currM][currN] == 1)return 0;
//    
//    if(currM == 0 && currN == 0) return 1;
//    
//    
//    if(dp[currM][currN] != -1)return dp[currM][currN];
//    
//    int right = customFunc(obstacleGrid, currM-1, currN,dp);
//    
//    int left = customFunc(obstacleGrid, currM, currN-1,dp);
//    
//    return dp[currM][currN] = left+right;
//}
//
//
//
//int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid){
//    
//    
//    
//    int m = obstacleGrid.size();
//    
//    int n = obstacleGrid[0].size();
//    
//    vector<vector<int>>dp(m,vector<int>(n,0));
//    
//    for(int i = 0 ; i < n ; i++){
//        if(obstacleGrid[0][i] == 1)break;
//        dp[0][i] = 1;
//    }
//    
//    for(int i = 0 ; i < m ; i++){
//        if(obstacleGrid[i][0] == 1)break;
//        dp[i][0] = 1;
//    }
//    
//    
////    dp[0][0] = 1;
//    
//    for(int currM = 1 ; currM<m;currM++){
//        for(int currN = 1 ;currN<n ;currN++){
//            
//            if(obstacleGrid[currM][currN]==1)continue;
//
//            int right = dp[currM-1][currN];
//            
//            int left = dp[currM][currN-1];
//            
//            dp[currM][currN] = left+right;
//            
//        }
//    }
//        
////    int x = customFunc(obstacleGrid, m-1, n-1,dp);
//    
////    for(auto i: dp){
////        for(auto k : i){
////            cout<<k<<" ";
////        }
////        cout<<endl;
////    }
//    
//    return dp[m-1][n-1];
//    
//}
//
//
//
//
//
//int main(){
//
//    vector<vector<int>> obstacleGrid = {{0,0,0},{0,1,0},{0,0,0}};//2
//    
//    obstacleGrid = {{0,1},
//                    {0,0}};//1
//    
//    obstacleGrid = {{1}}; //0
//    
//    obstacleGrid = {{0,0,0,0},
//                    {0,1,0,0},
//                    {0,0,0,0},
//                    {0,0,1,0},
//                    {0,0,0,0}}; // 7
//    
//    obstacleGrid = {{0,1,0},
//                    {0,0,0},
//                    {0,0,0}};
//    
//    cout<<uniquePathsWithObstacles(obstacleGrid)<<endl;
//    
//    return 0;
//}
