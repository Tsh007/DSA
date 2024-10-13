////
////  20_sudoku_solver.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 08/10/24.
////
//
//#include <stdio.h>
//#include "bits/stdc++.h"
//
//using namespace std;
//
//void checkColumn(vector<vector<char>>&mat,int i,int j,vector<int>&arr){
//    int k = i;
//    
//    while(k>=0){
//        if(mat[k][j]!='.')arr[mat[k][j] - 49] = 1;
//        k--;
//    }
//    
//    k = i;
//    
//    while(k<9){
//        if(mat[k][j]!='.')arr[mat[k][j] - 49] = 1;
//        k++;
//    }
//}
//
//void checkRow(vector<vector<char>>&mat,int i,int j,vector<int>&arr){
//    int k = j;
//    
//    while(k>=0){
//        if(mat[i][k]!='.')arr[mat[i][k] - 49] = 1;
//        k--;
//    }
//    
//    k = j;
//    
//    while(k<9){
//        if(mat[i][k]!='.')arr[mat[i][k] - 49] = 1;
//        k++;
//    }
//    
//}
//
//void checkSubMat(vector<vector<char>>&mat,int i,int j,vector<int>&arr){
//    
//    int minR;int minC;
//    
//    if(i<=2)minR = 0;
//    else if(i<=5)minR = 3;
//    else minR = 6;
//    
//    
//    if(j<=2)minC = 0;
//    else if(j<=5)minC = 3;
//    else minC = 6;
//    
//    for(int x = minR;x<minR+3;x++){
//        for(int y = minC;y<minC+3;y++){
//            if(mat[x][y] != '.')arr[mat[x][y] - 49] = 1;
//        }
//    }
//}
//
//void customFunc(vector<vector<char>>&ans,int i,int j,vector<vector<char>>&mat,vector<int>arr){
//    
//    if(i >= 8 && j >= 8 && mat[i][j]!='.'){
//        ans = mat;
//        return;
//    }
//    
//    
//    for(int m = 0;m<9;m++)arr[m] = -1;
//    
//    
//    if(mat[i][j]=='.'){
//        
//        checkRow(mat, i, j, arr);
//        checkColumn(mat, i, j, arr);
//        checkSubMat(mat, i, j, arr);
//        
//        bool flag = false;
//        for(int m = 0;m<9;m++)if(arr[m] == -1)flag = true;
//        if(!flag)return;
//        
//        for(int k=0;k<9;k++){
//            
//            if(arr[k] == -1){
//                mat[i][j] = char((k+49));
//                arr[k] = 1;
//                if(j >= 8 && i<8){
//                    customFunc(ans,i+1, 0, mat, arr);
//                    mat[i][j] = '.';
//                }else if(j>=8 && i>=8){
//                    customFunc(ans,i,j,mat,arr);
//                }else{
//                    customFunc(ans,i, j+1, mat, arr);
//                    mat[i][j] = '.';
//                }
//            }
//        }
//    }else{
////        if(i==8 && j==8){
////            ans = mat;
////            return;
////        }
//        
//        if(j >= 8 && i<8){
//            customFunc(ans,i+1, 0, mat, arr);
//        }else if(j>=8 && i>=8){
//            customFunc(ans,i,j,mat,arr);
//        }else{
//            customFunc(ans,i, j+1, mat, arr);
//        }
//    }
//    
//}
//
//
//void solveSudoku(vector<vector<char>>& board) {
//    
//    vector<int>arr(9,-1);
//    
////    unordered_map<int,int>arr;
//    
//    vector<vector<char>>ans;
//    
//    customFunc(ans,0, 0, board, arr);
//    
////    for(auto i : ans){
////        for(auto k : i){
////            cout<<k<<" ";
////        }
////        cout<<endl;
////    }
//    
//    board = ans;
//        
//}
//
//
//int main(){
//
//    
//    vector<vector<char>> mat = 
//    {
//        {'5','3','.','.','7','.','.','.','.'},
//        {'6','.','.','1','9','5','.','.','.'},
//        {'.','9','8','.','.','.','.','6','.'},
//        {'8','.','.','.','6','.','.','.','3'},
//        {'4','.','.','8','.','3','.','.','1'},
//        {'7','.','.','.','2','.','.','.','6'},
//        {'.','6','.','.','.','.','2','8','.'},
//        {'.','.','.','4','1','9','.','.','5'},
//        {'.','.','.','.','8','.','.','7','9'}
//    };
//    
//    
//    mat = {{'.','.','9','7','4','8','.','.','.'},{'7','.','.','.','.','.','.','.','.'},{'.','2','.','1','.','9','.','.','.'},{'.','.','7','.','.','.','2','4','.'},{'.','6','4','.','1','.','5','9','.'},{'.','9','8','.','.','.','3','.','.'},{'.','.','.','8','.','3','.','2','.'},{'.','.','.','.','.','.','.','.','6'},{'.','.','.','2','7','5','9','.','.'}};
//    
//    solveSudoku(mat);
//    
//    
//    return 0;
//}
