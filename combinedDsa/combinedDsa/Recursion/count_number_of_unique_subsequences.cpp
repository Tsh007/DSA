////
////  count_number_of_unique_subsequences.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 13/09/24.
////
//
////watch video of pep coding on this https://www.youtube.com/watch?v=9UEHPiK53BA
////understand why we need to make dp array why only making a hash map wont work
//
//#include <stdio.h>
//#include "bits/stdc++.h"
//
//
//using namespace std;
//
//
////wrong
////int countUniqueSubsequence(string s){
////    
////    int count = 1;
////    unordered_map<char,int>hash;
////    
////    for(int i=0;i<s.length();i++){
////        
//////        count = 2*count;
////        
////        
////        if(hash.find(s[i]) != hash.end()){
////            count = pow(2,i+1) - hash[s[i]];
////            hash[s[i]] = count + hash[s[i]];
////        }else{
////            count = pow(2,i+1);
////            hash[s[i]] = count;
////        }
////        
////    }
////    
////    return count;
////    
////    
////}
//
//
////correct
//
////int countUniqueSubsequence(string s){
////    int dp[s.length()+1];
////    
////    unordered_map<char,int> hash;
////    
////    int n = s.length();
////    
////    dp[0] = 1;
////    
////    for(int i = 1;i<=n;i++){
////        
////        dp[i] = 2*dp[i-1];
////        
////        if(hash.find(s[i-1]) != hash.end()){
////            dp[i] = dp[i] - dp[hash[s[i - 1]]];
////        }
////        
////        hash[s[i-1]] = i-1;
////        
////        
////    }
////    
////    
////    
////    return dp[n];
////}
//
//
////try
//
//int countUniqueSubsequence(string s){
//    
//    int n = s.length();
//    
//    int dp[n+1];
//    
//    dp[0] = 1;
//    
//    unordered_map<char,int>hash;
//    
//    for(int i=1;i<=n;i++){
//        dp[i] = dp[i-1]*2;
//        
//        if(hash.find(s[i-1]) != hash.end()){
//            dp[i] = dp[i] - dp[hash[s[i-1]]];
//        }
//        
//        hash[s[i-1]] = i-1;
//        
//    }
//    
//    return dp[n];
//}
//
//
//
//
//
//
//int main(){
//    string s = "ggg";
////    s = "abbcc";
////    s = "aaa";
////    s = "a";
////    s = "aa";
//    
////    s = "gfg";
//    
//    cout<<countUniqueSubsequence(s)<<endl;
//    
//    
//    return 0;
//}
//
