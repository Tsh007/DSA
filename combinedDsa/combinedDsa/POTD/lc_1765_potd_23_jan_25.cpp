////
////  lc_1765_potd_23_jan_25.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 23/01/25.
////
//
//#include "bits/stdc++.h"
//
//using namespace std;
//
//
//int getMin(vector<vector<int>>grid,int i,int j,int val){
//        int minVal = val;
//
//        if(i+1 < grid.size() && grid[i+1][j] != -1){
//            minVal = min(minVal,grid[i+1][j]);
//        }
//        if(j+1 < grid[i].size() && grid[i][j+1] != -1){
//            minVal = min(minVal,grid[i][j+1]);
//        }
//        if(i-1 >= 0 && grid[i-1][j] != -1){
//            minVal = min(minVal,grid[i-1][j]);
//        }
//        if(j-1 >= 0 && grid[i][j-1] != -1){
//            minVal = min(minVal,grid[i][j-1]);
//        }
//
//        return minVal;
//    }
//
//    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
//        vector<vector<int>> ans(isWater.size(),vector<int>(isWater[0].size(),-1));
//
//        queue<pair<int,int>> q;
//
//        for(int i = 0;i<isWater.size();i++){
//            for(int j = 0;j<isWater[i].size();j++){
//                if(isWater[i][j] == 1){
//                    //water
//                    ans[i][j] = 0;
//
//                    q.push({i,j});
//                }
//            }
//        }
//
//        while(!q.empty()){
//
//            pair<int,int> p = q.front();
//            q.pop();
//
//            int i = p.first;
//            int j = p.second;
//
//            if(i+1 <isWater.size() && ans[i+1][j] == -1){
//                ans[i+1][j] = getMin(ans,i+1,j,ans[i][j]) + 1;
//                q.push({i+1,j});
//            }
//            if(j+1 <isWater[i].size() && ans[i][j+1] == -1){
//                ans[i][j+1] = getMin(ans,i,j+1,ans[i][j]) + 1;
//                q.push({i,j+1});
//            }
//            if(i-1 >= 0 && ans[i-1][j] == -1){
//                ans[i-1][j] = getMin(ans,i-1,j,ans[i][j]) + 1;
//                q.push({i-1,j});
//            }
//            if(j-1 >= 0 && ans[i][j-1] == -1){
//                ans[i][j-1] = getMin(ans,i,j-1,ans[i][j]) + 1;
//                q.push({i,j-1});
//            }
//        }
//
//        return ans;
//
//    }
//
//int main(){
//    
//    return 0;
//}
