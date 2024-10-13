////
////  14_n_queen.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 01/10/24.
////
//
//#include <stdio.h>
//#include "bits/stdc++.h"
//
//using namespace std;
//
//bool checkVerticle(vector<string>arr,int c){
//    
//    for(int k = 0;k<arr[0].size();k++){
//        if(arr[k][c] != '.')return false;
//    }
//    
//    return true;
//}
//
//
//bool checkHorizontal(vector<string>arr,int r){
//    
//    for(int i=0;i<arr[0].size();i++){
//        if(arr[r][i] != '.')return 0;
//    }
//    
//    return 1;
//}
//
//bool checkDiagonal(vector<string>arr,int row,int col){
//    
//    
//    //check left to right diagonal
//    int r = row;int c = col;
//    
//    int size = arr[0].size();
//    
//    while(r<size && c<size){
//        if(arr[r][c] != '.')return false;
//        r++;c++;
//    }
//    
//    r = row;c = col;
//    
//    while(r>=0 && c>=0){
//        if(arr[r][c] != '.')return false;
//        r--;c--;
//    }
//    
//    //check right to left diagonal
//    r = row;c=col;
//    
//    if(r+c>=size){
//        while(r<size && c<size){
//            if(arr[r][c] != '.')return false;
//            r++;
//            c--;
//        }
//        
//        r = row;c = col;
//        
//        while(r<size && c<size){
//            if(arr[r][c] != '.')return 0;
//            r--;
//            c++;
//        }
//    }else{
//        while(r>=0 && c>=0){
//            if(arr[r][c] != '.')return 0;
//            r--;c++;
//        }
//        
//        r = row;c = col;
//        
//        while(r>=0 && c>=0){
//            if(arr[r][c] != '.')return 0;
//            r++;c--;
//        }
//    }
//    
//    
//    
//    
//    return 1;
//}
//
//
//void customFunc(vector<vector<string>>& ans,int size,vector<string>arr,int row,int col,int qCount){
//    
//    //base case
////    if(row ==size && col==size){
//    if(qCount == size){
//        ans.push_back(arr);
//        return;
//    }
////    }
//    
//    for(int i=0;i<size;i++){
//        if(checkHorizontal(arr,row) && checkVerticle(arr, i) && checkDiagonal(arr, row, i)){
//            arr[row][i] = 'Q';
//            customFunc(ans,size,arr,row+1,i,qCount+1);
//            arr[row][i] = '.';
//        }
//    }
//}
//
//vector<vector<string>> solveNQueens(int n){
//    
//    vector<vector<string>>ans;
//    
//    vector<string>arr;
//    
//    for(int i=0;i<n;i++){
//        string s = "";
//        for(int k=0;k<n;k++){
//            s+='.';
//        }
//        arr.push_back(s);
//    }
//    
//    
////    arr[2][3] = 'Q';
////    arr[0][4] = 'Q';
//    
////    cout<<checkDiagonal(arr, 0, 2)<<endl;
//    
////    ans.push_back(arr);
//    
//    customFunc(ans, arr[0].size(), arr, 0, 0, 0);
//    
//    return ans;
//}
//
//int main(){
//    
//    vector<vector<string>>ans = solveNQueens(9);
//    
//    for(auto i : ans){
//        for(auto k : i){
//            cout<<k<<endl;
//        }
//        cout<<endl;
//        cout<<endl;
//    }
//    
//    
//    return 0;
//}
