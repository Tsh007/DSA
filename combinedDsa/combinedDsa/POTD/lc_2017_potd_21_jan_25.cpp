////
////  lc_2017_potd_21_jan_25.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 21/01/25.
////
//
//
//#include "bits/stdc++.h"
//
//using namespace std;
//
////long long customFunc(vector<vector<int>>& grid,int i,int j,vector<vector<int>>& vis){
////        if(i>1 || j>=grid[i].size())return INT_MAX;
////
////        if(i == 1 && j == grid[i].size()-1)return grid[i][j];
////
////        long long down = customFunc(grid,i+1,j,vis);
////
////        long long right = customFunc(grid,i,j+1,vis);
////        
//////        if(vis[i][j] == 1)return min(right,down);
////    
//////        if(right > down && j+1<grid[i].size()){
//////            vis[i][j+1] = 1;
//////            return grid[i][j] + down;
//////        }else if(down > right && i+1<2){
//////            vis[i+1][j] = 1;
//////            return grid[i][j] + right;
//////        }
////
////        
////
////        return grid[i][j] + min(right,down);
////    }
//
//    long long gridGame(vector<vector<int>>& grid) {
//        
//        //tried dp not working
//        
//        long long bottomSum = 0;
//        long long topSum = 0;
//        
//        for(int i = 0 ;i<grid[0].size();i++){
////            bottomSum += grid[1][i];
//            topSum += grid[0][i];
//        }
//        
////        int minSumIdx = 0;
//        
//        long long maxSum = INT_MIN;
//        
//        for(int i = 0 ; i<grid[0].size() ;i++){
//            topSum -= grid[0][i];
//            
//            if(i>0)bottomSum += grid[1][i-1];
//            
//            if(i == 0){
//                maxSum = topSum;
//            }else if(i == grid[0].size()-1){
//                maxSum = min(maxSum,bottomSum);
//            }else{
//                maxSum = min(maxSum,max(topSum,bottomSum));
//            }
////            cout<<maxSum<<endl;
//        }
//        
//        return maxSum;
//    }
//
//
//int main(){
//    
//    vector<vector<int>>grid = { {3,3,1},
//                                {8,5,2}};
//    
////    grid = {{2,5,4},
////            {1,5,1}};
////    
////    grid = {{1,3,1,15},{1,3,3,1}};
//    
//    grid = {{3,3,21},
//            {18,15,2}};
//    
//    cout<<gridGame(grid)<<endl;
//    
//    return 0;
//}
