////
////  11_triangle.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 27/12/24.
////
//
//#include "bits/stdc++.h"
//
//using namespace std;
//
////int customFunc(vector<vector<int>>& triangle,int i,int j,vector<vector<int>>& dp){
////    if(i>=triangle.size())return 0;
////    
////    if(j>=triangle[i].size())return 0;
////    
////    if(i==triangle.size()-1) return triangle[i][j];
////    
////    if(dp[i][j] != -1)return dp[i][j];
////    
////    int same = customFunc(triangle,i+1,j,dp);
////    
////    int prev = customFunc(triangle,i+1,j+1,dp);
////    
////    return dp[i][j] = triangle[i][j] + min(same,prev);
////}
////
////int minimumTotal(vector<vector<int>>& triangle) {
//////    int m = triangle.size()-1;
//////    int n = triangle[m].size()-1;
////    
////    vector<vector<int>> dp(triangle.size(),vector<int>(triangle[triangle.size()-1].size(),-1));
////    
////    return customFunc(triangle, 0, 0, dp);
////}
//
//
////Tabulation == Bottom up == iterative
//
////int minimumTotal(vector<vector<int>>& triangle) {
////
////    vector<vector<int>> dp(triangle.size(),vector<int>(triangle[triangle.size()-1].size(),-1));
////    
////    for(int i = triangle.size()-1;i>=0;i--){
////        for(int j = 0;j<triangle[i].size();j++){
////        
////            int same = 0;
////            if(i<triangle.size()-1)same = dp[i+1][j];
////            
////            int prev = 0;
////            if(i<triangle.size()-1)prev = dp[i+1][j+1];
////            
////            dp[i][j] = triangle[i][j] + min(same,prev);
////            
////        }
////    }
////    
////    return dp[0][0];
////}
//
//
////Space optimization
//
//int minimumTotal(vector<vector<int>>& triangle) {
//
////    vector<vector<int>> dp(triangle.size(),vector<int>(triangle[triangle.size()-1].size(),-1));
//    
//    vector<int> curr(triangle[triangle.size()-1].size(),-1);
//    
//    for(int i = triangle.size()-1;i>=0;i--){
//        
//        vector<int> temp = curr;
//        
//        for(int j = 0;j<triangle[i].size();j++){
//        
//            int same = 0;
//            if(i<triangle.size()-1)same = temp[j];
//            
//            int prev = 0;
//            if(i<triangle.size()-1)prev = temp[j+1];
//            
//            curr[j] = triangle[i][j] + min(same,prev);
//            
//        }
//    }
//    
//    return curr[0];
//}
//
//
//int main(){
//    
//    vector<vector<int>>triangle = { {2},
//                                    {3,4},
//                                    {6,5,7},
//                                    {4,1,8,3}};//11
//    
//    cout<<minimumTotal(triangle)<<endl;
//    
//    return 0;
//}
