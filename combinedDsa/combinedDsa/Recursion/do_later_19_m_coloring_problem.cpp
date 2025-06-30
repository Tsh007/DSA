////
////  19_m_coloring_problem.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 10/10/24.
////
//
//#include <stdio.h>
//
//#include "bits/stdc++.h"
//
//using namespace std;
//
////string graphColoring(vector<vector<int>> &mat, int m) {
////    // Write your code here
////
////    int count = m;
////
////    for(int i = 0;i<mat.size();i++){
////        for(int j = 0;j<mat[0].size();j++){
////
////            if(mat[i][j] == 1 && count != 0){
////                count--;
////            }else if(mat[i][j] == 1 && count == 0){
////                return "NO";
////            }
////        }
////
////        count = m;
////    }
////
////    return "YES";
////}
//
////func to convert pair to adjacency matrix
////1 - using vector to represent pairs ex {{1,2},{2,3},{3,1}}
////vector<vector<int>> pairToAdjacency(vector<vector<int>> pairs,int n){
////    
////    vector<vector<int>>mat(n,vector<int>(n,0));
////    
////    for(auto i:pairs){
////        mat[i[0]-1][i[1]-1] = 1;
////        mat[i[1]-1][i[0]-1] = 1;
////    }
////    
////    return mat;
////    
////}
//
//// 2 - using pairs to represent pairs
//
////vector<vector<int>> pairToAdjacency(vector<pair<int,int>>&edges,int m){
////    
////    vector<vector<int>>mat(m,vector<int>(m,0));
////    
////    for(auto i : edges){
////        mat[i.first][i.second] = 1;
////        mat[i.second][i.first] = 1;
////    }
////    
////    return mat;
////}
//
//
//
//int main(){
//    
//    vector<vector<int>>mat;
////    = {{0,1,0},{1,0,1},{0,1,0}};
//    
////    cout<<graphColoring(mat, 3)<<endl;
//    
//    
//    return 0;
//}
