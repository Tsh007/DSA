////
////  lc2872_potd_21_dec_24.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 22/12/24.
////
//
//
//#include "bits/stdc++.h"
//using namespace std;
//
//int recursiveDfs(vector<vector<int>> &adjMat,vector<int>&vis,vector<int>& values,int d,int i,int &count){
//
//    if(i>=adjMat.size())return 0;
//    
//    // ans.push_back(i);
//    vis[i] = 1;
//
//    int val = 0;
//    
//    for(int k = 0 ;k<adjMat.size();k++){
//        if(vis[k] == 0 && adjMat[i][k] == 1){
//            val += recursiveDfs(adjMat,vis,values,d,k,count);
////            if(val%d == 0){
////                count++;
////                return 0;
////            }
//        }
//    }
//    
//    if(val && val%d == 0){
//        count++;
//        return 0;
//    }
//    
//    if((values[i]+val)%d == 0){
//        count++;
//        return 0;
//    }
//    return values[i]+val;
//    
//}
//
//    int maxKDivisibleComponents(int n, vector<vector<int>>& edges, vector<int>& values, int k) {
//
//        vector<vector<int>>adjMat(n,vector<int>(n,0));
//        vector<int>vis(adjMat.size(),0);
//        for(auto i : edges){
//            adjMat[i[0]][i[1]] = 1;
//            adjMat[i[1]][i[0]] = 1;
//        }
//        
////        for(auto i : adjMat){
////            for(auto j : i){
////                cout<<j<<" ";
////            }
////            cout<<endl;
////        }
//
//        int count = 0;
//        recursiveDfs(adjMat,vis,values,k,0,count);
////        if(recursiveDfs(adjMat,vis,values,k,0,count)%k == 0)count++;
//        return count;
//    }
//
//
//int main(){
//    //testcase 1
//    int n = 5;
//    vector<vector<int>>edges = {{0,2},{1,2},{1,3},{2,4}};
//    vector<int>values = {1,8,1,4,4};
//    int k = 6;
//    
//    
//    //testcase 2
//    n = 7;
//    edges = {{0,1},{0,2},{1,3},{1,4},{2,5},{2,6}};
//    values = {3,0,6,1,5,2,1};
//    k = 3;
//    
//    cout<<maxKDivisibleComponents(n, edges, values, k)<<endl;
//        
//    
//    
//    return 0;
//}
