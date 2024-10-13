////
////  15_word_search.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 06/10/24.
////
//
//#include <stdio.h>
//#include "bits/stdc++.h"
//
//using namespace std;
//
////bool searchForWord(vector<vector<char>>& board,string word,int m,int n,int i,int j,int idx,vector<vector<int>>hash){
////    
////    if(idx >= word.length()){
////        return 1;
////    }
////    
////    //down
////    if(i+1 < m && board[i+1][j] == word[idx] && hash[i+1][j]==-1){
////        hash[i+1][j] = 1;
////        if(searchForWord(board, word, m, n, i+1, j, idx+1,hash))return 1;
////        hash[i+1][j] = -1;
////        
////    }
////    
////    //up
////    if(i-1 >=0 && board[i-1][j] == word[idx] && hash[i-1][j]==-1){
////        hash[i-1][j]=1;
////        if(searchForWord(board, word, m, n, i-1, j, idx+1,hash))return 1;
////        hash[i-1][j]=-1;
////    }
////    
////    //left
////    if(j-1 >=0 && board[i][j-1] == word[idx] && hash[i][j-1]==-1){
////        hash[i][j-1]=1;
////        if(searchForWord(board, word, m, n, i, j-1, idx+1,hash))return 1;
////        hash[i][j-1]=-1;
////    }
////    
////    //right
////    if(j+1 < n && board[i][j+1] == word[idx] && hash[i][j+1]==-1){
////        hash[i][j+1]=1;
////        if(searchForWord(board, word, m, n, i, j+1, idx+1,hash))return 1;
////        hash[i][j+1]=-1;
////    }
////    
////    return false;
////}
//
////above gives TLE on Leetcode below is better
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//bool searchForWord(vector<vector<char>>& board,string word,int m,int n,int i,int j,int idx){
//    
//    if(idx >= word.length()){
//        return 1;
//    }
//    
//    //down
//    if(i+1 < m && board[i+1][j] == word[idx]){
//
//        board[i+1][j] = '#';
//        if(searchForWord(board, word, m, n, i+1, j, idx+1))return 1;
//        board[i+1][j] = word[idx];
//        
//    }
//    
//    //up
//    if(i-1 >=0 && board[i-1][j] == word[idx]){
//        board[i-1][j]='#';
//        if(searchForWord(board, word, m, n, i-1, j, idx+1))return 1;
//        board[i-1][j]=word[idx];
//    }
//    
//    //left
//    if(j-1 >=0 && board[i][j-1] == word[idx]){
//        board[i][j-1]='#';
//        if(searchForWord(board, word, m, n, i, j-1, idx+1))return 1;
//        board[i][j-1]=word[idx];
//    }
//    
//    //right
//    if(j+1 < n && board[i][j+1] == word[idx]){
//        board[i][j+1]='#';
//        if(searchForWord(board, word, m, n, i, j+1, idx+1))return 1;
//        board[i][j+1]=word[idx];
//    }
//    
//    return false;
//}
//
//
//
//bool exist(vector<vector<char>>& board, string word) {
//    
////    vector<vector<int>> hash(board.size(),vector<int>(board[0].size(),-1));
//    
//    if(word.size() > board.size()*board[0].size())return false;
//    
//    for(int i=0;i<board.size();i++){
//        for(int k=0;k<board[0].size();k++){
//            if(board[i][k] == word[0]){
////                hash[i][k] = 1;
//                board[i][k] = '#';
////                if(searchForWord(board, word, board.size(), board[0].size(), i, k, 1,hash))return 1;
//                if(searchForWord(board, word, board.size(), board[0].size(), i, k, 1))return 1;
//                
////                hash[i][k] = -1;
//                board[i][k] = word[0];
//            }
//        }
//    }
//    
//    return 0;
//        
//}
//
//
//int main(){
//    
//    vector<vector<char>> board = {{'A','B','C','E'},{'S','F','C','S'},{'A','D','E','E'}};
//    
//    string word = "ABCCED";
//    word = "SEE";
//    word = "ABCB";
//    
//    board = {{'A','B','C','D','E','F'},
//        {'A','B','C','D','E','F'},
//        {'A','B','C','D','E','F'},
//        {'A','B','C','D','E','F'},
//        {'A','B','C','D','E','F'},
//        {'A','B','C','D','E','F'},
//        {'A','B','C','D','E','F'},
//        {'A','B','C','D','E','F'},
//        {'A','B','C','D','E','F'},
//        {'A','B','C','D','E','F'},
//        {'A','B','C','D','E','F'},
//        {'A','B','C','D','E','F'},
//        {'A','B','C','D','E','F'}};
//    
//    word = "BCDEEFFEDCBAABC";
//    
//    
//    
//    board = {{'C','A','A'},
//            {'A','A','A'},
//            {'B','C','D'}};
//    
//    word = "AAB";
//    
//    
//    
//    
//    
////    board = {{'A','B','C','D','E','F'},
////        {'A','B','C','D','E','F'},
////        {'A','B','C','D','E','F'},
////        {'A','B','C','D','E','F'},
////        {'A','B','C','D','E','F'},
////        {'A','B','X','X','X','F'},
////        {'A','B','X','D','X','F'},
////        {'A','B','X','X','X','F'},
////        {'A','B','C','D','E','F'},
////        {'A','B','C','D','E','F'},
////        {'A','B','C','D','E','F'},
////        {'A','B','C','D','E','F'},
////        {'A','B','C','D','E','F'}};
////    
////    word = "XXXXXXXXXXXXXXXXXXXXXXXXX";
////        
////    
////    board = {
////        {'A','B','C','E'},
////        {'S','F','E','S'},
////        {'A','D','E','E'}};
////    
////    word = "ABCESEEEFS";
//    
//    
//    //this gives TLE
//    board = {
//        {'A','A','A','A','A','A'},
//        {'A','A','A','A','A','A'},
//        {'A','A','A','A','A','A'},
//        {'A','A','A','A','A','A'},
//        {'A','A','A','A','A','A'},
//        {'A','A','A','A','A','A'}
//    };
//    
//    word = "AAAAAAAAAAAAAAB";
//    
//    
//    board = {
//        {'a','a'},
//        {'A','A'}
//    };
//    
//    word = "aaa";
//    cout<<exist(board, word)<<endl;
//    
//    
//    return 0;
//}
//
//
///*
// 
// [["C","A","A"],["A","A","A"],["B","C","D"]]
// "AAB"
// 
// 
// [["a","a","a","a"],["a","a","a","a"],["a","a","a","a"]]
// "aaaaaaaaaaaaa"
// 
// 
// [["a","a","b","a","a","b"],["a","a","b","b","b","a"],["a","a","a","a","b","a"],["b","a","b","b","a","b"],["a","b","b","a","b","a"],["b","a","a","a","a","b"]]
// "bbbaabbbbbab"
// 
// 
// [["A","B","C","E"],["S","F","E","S"],["A","D","E","E"]]
// "ABCESEEEFS"
// 
// 
// [["A","A","A","A","A","A"],["A","A","A","A","A","A"],["A","A","A","A","A","A"],["A","A","A","A","A","A"],["A","A","A","A","A","A"],["A","A","A","A","A","A"]]
// "AAAAAAAAAAAAAAB"
// 
// 
// 
// */
//
//
//
