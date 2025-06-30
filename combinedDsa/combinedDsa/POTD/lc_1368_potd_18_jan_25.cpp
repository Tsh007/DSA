////
////  lc_1368_potd_18_jan_25.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 18/01/25.
////
//
//#include "bits/stdc++.h"
//
//using namespace std;
//
////int customFunc(vector<vector<int>>& grid,int i,int j){
////        
////        if(i<0 || j<0 || i>=grid.size() || j>=grid[i].size())return 1e9;
////    
////        if(grid[i][j] == -1)return 1e9;
////
////        if(i == grid.size()-1 && j == grid[i].size()-1)return 0;
////        
////        int temp = grid[i][j];
////        grid[i][j] = -1;
////    
////        int right = 1+customFunc(grid,i,j+1);
////
////        int left = 1+customFunc(grid,i,j-1);
////
////        int down = 1+customFunc(grid,i+1,j);
////
////        int up = 1+customFunc(grid,i-1,j);
////
//////        int val = grid[i][j];
////        // if(val == 4)up =
////
////        if(temp == 1){
////            right--;
////        }else if(temp == 2){
////            left--;
////        }else if(temp == 3){
////            down--;
////        }else if(temp == 4){
////            up--;
////        }
////    
////        
////        grid[i][j] = temp;
////    
////        return min({right,left,up,down});
////}
//
//
////int customFunc(vector<vector<int>>& grid,int i,int j,vector<vector<int>>&dp){
////        
////        if(i<0 || j<0 || i>=grid.size() || j>=grid[i].size())return 1e9;
////    
////        if(grid[i][j] == -1)return 1e9;
////
////        if(i == grid.size()-1 && j == grid[i].size()-1)return 0;
////    
////        if(dp[i][j] != -1)return dp[i][j];
////    
////        int temp = grid[i][j];
////        grid[i][j] = -1;
////    
////        int right = 1+customFunc(grid,i,j+1,dp);
////
////        int left = 1+customFunc(grid,i,j-1,dp);
////
////        int down = 1+customFunc(grid,i+1,j,dp);
////
////        int up = 1+customFunc(grid,i-1,j,dp);
////
////        if(temp == 1){
////            right--;
////        }else if(temp == 2){
////            left--;
////        }else if(temp == 3){
////            down--;
////        }else if(temp == 4){
////            up--;
////        }
////    
////        
////        grid[i][j] = temp;
////        
//////        cout<<i<<" "<<j<<" "<<min({right,left,up,down})<<endl;
////        return dp[i][j] = min({right,left,up,down});
////}
//
//
//
///// this approach is also wrong do try this question again after doing graphs and dp
///// 
//
//int customFunc(vector<vector<int>>& grid,int i,int j,unordered_map<string,int>& dp,string prev){
//        
//        if(i<0 || j<0 || i>=grid.size() || j>=grid[i].size())return 1e9;
//    
//        if(grid[i][j] == -1)return 1e9;
//
//        if(i == grid.size()-1 && j == grid[i].size()-1)return 0;
//            
//        string curr = to_string(i) + "_" + to_string(j);
//    
//        if(dp[curr + prev] != 0)return dp[curr + prev];
//    
//        int temp = grid[i][j];
//        grid[i][j] = -1;
//    
//        int right = 1+customFunc(grid,i,j+1,dp,curr);
//
//        int left = 1+customFunc(grid,i,j-1,dp,curr);
//
//        int down = 1+customFunc(grid,i+1,j,dp,curr);
//
//        int up = 1+customFunc(grid,i-1,j,dp,curr);
//
//        if(temp == 1){
//            right--;
//        }else if(temp == 2){
//            left--;
//        }else if(temp == 3){
//            down--;
//        }else if(temp == 4){
//            up--;
//        }
//    
//        
//        grid[i][j] = temp;
//        
////        cout<<i<<" "<<j<<" "<<min({right,left,up,down})<<endl;
//        return dp[curr + prev] = min({right,left,up,down});
//}
//
//
//int minCost(vector<vector<int>>& grid) {
//    
////    vector<string>dp1;
//    
//    vector<vector<int>> dp(grid.size(),vector<int>(grid[0].size(),-1));
//    
//
////    vector<vector<vector<int>>> dp(grid.size(),vector<vector<int>>(grid[0].size(),vector<int>())
//    
////    vector<vector<int>> dp1(grid.size(),vector<int>(grid[0].size(),-1));
//    
//    unordered_map<string,int>mpp;
//    
//
//    int ans = customFunc(grid,0,0,mpp,"");
//    
//    return ans;
//}
//
//int main(){
//    
//    vector<vector<int>> grid = {{1,1,1,1},
//        {2,2,2,2},
//        {1,1,1,1},
//        {2,2,2,2}};
//    
//    
//    
//        grid = {{1,2},
//                {4,3}};
//    
//    grid = {
//        {1,2,1},
//        {2,1,2},
//        {1,2,1}
//    };//2
////    
//    grid = {{1,2,1,2,1,2,1,2,1,2,1,2},
//            {2,1,2,1,2,1,2,1,2,1,2,1},
//            {1,2,1,2,1,2,1,2,1,2,1,2},
//            {2,1,2,1,2,1,2,1,2,1,2,1},
//            {1,2,1,2,1,2,1,2,1,2,1,2},
//            {2,1,2,1,2,1,2,1,2,1,2,1},
//            {1,2,1,2,1,2,1,2,1,2,1,2},
//            {2,1,2,1,2,1,2,1,2,1,2,1},
//            {1,2,1,2,1,2,1,2,1,2,1,2},
//            {2,1,2,1,2,1,2,1,2,1,2,1}};//10
//    
//    grid = {{3,2,3,2},
//            {4,3,3,1},
//            {3,3,1,4},
//            {2,4,1,2},
//            {1,4,4,2},
//            {2,1,1,4},
//            {1,4,4,3},
//            {1,1,3,2},
//            {2,3,1,4}};
//    
//    cout<<minCost(grid)<<endl;
//    
//    return 0;
//}
