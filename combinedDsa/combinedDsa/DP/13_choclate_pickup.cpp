//
//#include "bits/stdc++.h"
//
//using namespace std;
//
//
//
////bruteforce == recursion
////int customFunc(vector<vector<int>>& grid,int i,int j,int m){
////    
////    //base case
////    if(j<0 || m<0 || m>=grid[0].size() || j>=grid[0].size())return 0;
////    
////    
////    if(i==grid.size()-1){
////        
////        if(j==m)return grid[i][j];
////        return grid[i][j] + grid[i][m];
////    }
////    
////    int maxAns = INT_MIN;
////    
////    maxAns = max(maxAns,customFunc(grid, i+1, j-1, m-1));
////    maxAns = max(maxAns,customFunc(grid, i+1, j-1, m));
////    maxAns = max(maxAns,customFunc(grid, i+1, j-1, m+1));
////    maxAns = max(maxAns,customFunc(grid, i+1, j, m-1));
////    maxAns = max(maxAns,customFunc(grid, i+1, j, m+1));
////    maxAns = max(maxAns,customFunc(grid, i+1, j, m));
////    maxAns = max(maxAns,customFunc(grid, i+1, j+1, m));
////    maxAns = max(maxAns,customFunc(grid, i+1, j+1, m-1));
////    maxAns = max(maxAns,customFunc(grid, i+1, j+    1, m+1));
////    
////    if(j == m)return grid[i][j] + maxAns;
////    return grid[i][j] + grid[i][m] + maxAns;
////}
////
////int solve(int n, int m, vector<vector<int>>& grid) {
////    // code here
////    
////    return customFunc(grid,0,0,grid[0].size()-1);
////    
////}
//
//
//
////top down == recursion + memo
////int customFunc(vector<vector<int>>& grid,int i,int j,int m,vector<vector<vector<int>>>& dp){
////    
////    //base case
////    if(j<0 || m<0 || m>=grid[0].size() || j>=grid[0].size())return 0;
////    
////    
////    if(i==grid.size()-1){
////        
////        if(j==m)return grid[i][j];
////        return grid[i][j] + grid[i][m];
////    }
////    
////    if(dp[i][j][m] != -1)return dp[i][j][m];
////    
////    int maxAns = INT_MIN;
////
////    for(int s = -1 ;s<=1;s++){
////        for(int k = -1; k<=1 ;k++){
////            maxAns = max(maxAns,customFunc(grid,i+1,j+s,m+k,dp));
////        }
////    }
////
////    maxAns = max(maxAns,customFunc(grid, i+1, j-1, m-1,dp));
////    maxAns = max(maxAns,customFunc(grid, i+1, j-1, m,dp));
////    maxAns = max(maxAns,customFunc(grid, i+1, j-1, m+1,dp));
////    maxAns = max(maxAns,customFunc(grid, i+1, j, m-1,dp));
////    maxAns = max(maxAns,customFunc(grid, i+1, j, m+1,dp));
////    maxAns = max(maxAns,customFunc(grid, i+1, j, m,dp));
////    maxAns = max(maxAns,customFunc(grid, i+1, j+1, m,dp));
////    maxAns = max(maxAns,customFunc(grid, i+1, j+1, m-1,dp));
////    maxAns = max(maxAns,customFunc(grid, i+1, j+1, m+1,dp));
////    
////    if(j == m)return dp[i][j][m] = grid[i][j] + maxAns;
////    return dp[i][j][m] = grid[i][j] + grid[i][m] + maxAns;
////}
////
////int solve(int n, int m, vector<vector<int>>& grid) {
////    // code here
////    
////    vector<vector<vector<int>>> dp (grid.size(),vector<vector<int>>(grid[0].size(),vector<int>(grid[0].size(),-1)));
////    
////    int ans = customFunc(grid,0,0,grid[0].size()-1,dp);
////    
////    for(int i = 0 ; i<grid.size() ;i++){
////        for(int j = 0 ; j<grid[0].size();j++){
////            for(int k = 0 ; k<grid[0].size();k++){
////                cout<<dp[i][j][k]<<" ";
////            }
////            cout<<endl;
////        }
////        
////        cout<<endl;
////        cout<<endl;
////        cout<<endl;
////    }
////    
////    return ans;
////    
////}
//
////tabulation == bottom up == iterative + memo
////
////int solve(int n, int m, vector<vector<int>>& grid) {
////    // code here
////    
////    vector<vector<vector<int>>> dp (n,vector<vector<int>>(m,vector<int>(m,0)));
////    
////    //base case
////    for(int j = 0 ;j<m;j++){
////        for(int k = 0;k<m;k++){
////            if(j==k)dp[n-1][j][k] = grid[n-1][k];
////            else dp[n-1][j][k] = grid[n-1][j] + grid[n-1][k];
////        }
////    }
////    
////    
////    for(int i = n-2 ; i>=0; i--){
////        for(int j = 0 ; j<m;j++){
////            for(int t = 0 ;t<m;t++){
////                int maxAns = INT_MIN;
////                
////                for(int s = -1 ;s<=1;s++){
////                    for(int k = -1; k<=1 ;k++){
////                        if(j+s<m && t+k<m && j+s>=0 && t+k>=0 && i+1<n)maxAns = max(maxAns,dp[i+1][j+s][t+k]);
////                    }
////                }
////                
////                if(j == t)dp[i][j][t] = grid[i][j] + maxAns;
////                else dp[i][j][t] = grid[i][j] + grid[i][t] + maxAns;
////            }
////        }
////    }
////    
////  
////    return dp[0][0][m-1];
////    
////}
//
//
//
//
//
//
////space optimise
////1D -- constant space
////2D -- 1D array
////3D -- 2D array
//int solve(int n, int m, vector<vector<int>>& grid) {
//    // code here
//    
////    vector<vector<vector<int>>> dp (n,vector<vector<int>>(m,vector<int>(m,0)));
//    
//    vector<vector<int>>curr(m,vector<int>(m,0));
//    
//    //base case
//    for(int j = 0 ;j<m;j++){
//        for(int k = 0;k<m;k++){
//            if(j==k)curr[j][k] = grid[n-1][k];
//            else curr[j][k] = grid[n-1][j] + grid[n-1][k];
//        }
//    }
//    
//    //always remember to start from last in tabulation (oposite of recursion)
//    for(int i = n-2 ; i>=0; i--){
//        
//        vector<vector<int>> temp = curr;
//        
//        for(int j = 0 ; j<m;j++){
//            for(int t = 0 ;t<m;t++){
//                int maxAns = INT_MIN;
//                
//                for(int s = -1 ;s<=1;s++){
//                    for(int k = -1; k<=1 ;k++){
//                        if(j+s<m && t+k<m && j+s>=0 && t+k>=0 && i+1<n)maxAns = max(maxAns,temp[j+s][t+k]);
//                    }
//                }
//                
//                if(j == t)curr[j][t] = grid[i][j] + maxAns;
//                else curr[j][t] = grid[i][j] + grid[i][t] + maxAns;
//            }
//        }
//        
//    }
//    
//  
//    return curr[0][m-1];
//    
//}
//
//
//int main(){
//    
//    vector<vector<int>> grid = {{3,1,1},{2,5,1},{1,5,5},{2,1,1}};
//    
//    cout<<solve(grid.size(),grid[0].size(),grid)<<endl;
//    
//    return 0;
//}
