////
////  18_word_break.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 07/10/24.
////
//
//#include <stdio.h>
//#include "bits/stdc++.h"
//
//
//using namespace std;
//
////bool wordBreak(string s, vector<string>& wordDict) {
////        
////    int minLen = INT_MAX;
////    
////    for(auto i : wordDict){
////        if(i.length() < minLen)minLen = i.length();
////    }
////    
////    int prev = 0;
////    int prevPrev = 0;
////    
////    for(int i = 0;i<s.length();i++){
////        
//////        bigSub(
////        
////        string sub = s.substr(prev,i-prev+1);
////        string nxtSub = s.substr(i+1,s.length()-i+1);
////        bool flag = false;
////        bool nxtFlag = false;
////        
////        if(i-prev+1 < minLen)continue;
////        else{
////            for(auto k : wordDict){
////                if(k == sub){
////                    flag = 1;
////                    prev = i+1;
////                    if(prev == s.length())return true;
////                }
////                if(k==nxtSub)nxtFlag = 1;
////            }
////            
////            if(flag && nxtFlag)return 1;
////        }
////    }
////        
////        
////        
////    return false;
////}
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//bool customFunc(string s,unordered_map<string, int>&hash,int start,vector<int>&dp){
//    
//    if(s.substr(start,s.length()-start+1).empty())return 1;
//    
//    if(hash[s])return 1;
//    
//    if(dp[start] != -1)return dp[start];
//    
//    for(int i = start;i<s.length();i++){
//        if(hash[s.substr(start,i-start+1)] && customFunc(s, hash,i+1,dp))return 1;
//    }
//    
//    dp[start] = 0;
//    return false;
//}
//
//bool wordBreak(string s,vector<string>& wordDict){
//    
//    unordered_map<string,int>hash;
//    
//    for(auto i : wordDict){
//        hash[i]++;
//    }
//    
////    for(int i = wordDict.size()-1;i>=0;i--){
////        hash[wordDict[i]]++;
////    }
//    
//    vector<int>dp(s.length(),-1);
//    
//    return customFunc(s, hash,0,dp);
//}
//
//int main(){
//    
//    string s = "leetcode";
//    
//    
//    vector<string>wordDict = {"leet","code"};
//    
//    
//    s = "applepenapple", wordDict = {"apple","pen"};
//    
//    s = "catsandog", wordDict = {"cats","dog","sand","and","cat"};
//    
//    s = "aaaaaaa"; wordDict = {"aaaa","aaa"};
//     
//    s = "goalspecial"; wordDict = {"go","goal","goals","special"};
//    
//    s = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab";
//    wordDict = {"a","aa","aaa","aaaa","aaaaa","aaaaaa","aaaaaaa","aaaaaaaa","aaaaaaaaa","aaaaaaaaaa"};
//    
//    cout<<wordBreak(s, wordDict)<<endl;
//    
//    return 0;
//}
