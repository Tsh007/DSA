////
////  17_rat_in_a_maze.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 06/10/24.
////
//
//#include <stdio.h>
//
//#include "bits/stdc++.h"
//
//using namespace std;
//
//
//void customFunc(vector<string>&ans,vector<vector<int>>map,int i,int j,int n,string sub){
//    
//    if(i==n || j==n || i<0 || j<0 || map[i][j]==0 )return;
//    
//    if(i==n-1 && j==n-1){
//        ans.push_back(sub);
//        return;
//    }
//    
//    if(map[i][j] == 1){
//        //up
//        sub+='U';
//        map[i][j] = 0;
//        customFunc(ans, map, i-1, j, n, sub);
//        map[i][j] = 1;
//        sub.pop_back();
//        
//        //down
//        sub.push_back('D');
//        map[i][j] = 0;
//        customFunc(ans, map, i+1, j, n, sub);
//        map[i][j] = 1;
//        sub.pop_back();
//        
//        //right
//        sub.push_back('R');
//        map[i][j] = 0;
//        customFunc(ans, map, i, j+1, n, sub);
//        map[i][j] = 1;
//        sub.pop_back();
//        
//        //left
//        sub.push_back('L');
//        map[i][j] = 0;
//        customFunc(ans, map, i, j-1, n, sub);
//        map[i][j] = 1;
//        sub.pop_back();
//    }
//    
//}
//
//
//vector<string> findPath(vector<vector<int>> &mat) {
//    // Your code goes here
//    vector<string> ans;
//    
//    customFunc(ans, mat, 0, 0, mat.size(), "");
//    
//    if(ans.empty())return {"-1"};
//    
//    return ans;
//}
//
//int main(){
//    
//    
//    vector<vector<int>>mat = 
//        {{1, 0, 0, 0},
//        {1, 1, 0, 1},
//        {1, 1, 0, 0},
//        {0, 1, 1, 1}};
//    
//    mat = {{1,0},{1,0}};
//    
//    vector<string>ans = findPath(mat);
//    
//    for(auto i : ans){
//        cout<<i<<" ";
//    }
//    
//    
//    
//    
//    return 0;
//}
