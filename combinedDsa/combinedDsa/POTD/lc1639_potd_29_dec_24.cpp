


//done only recursion + memo -- do tabulation also later if see this question from code mik



////
////  lc1639_potd_29_dec_24.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 29/12/24.
////
//
//#include "bits/stdc++.h"
//
//using namespace std;
//
//const int mod = 1e9 + 7;
//
////int customFunc(vector<string>& words,string target,int i,int j,int k,vector<vector<vector<int>>>& dp){
////    
////    if(k == target.length())return 1;
////
////    if(j>=words[0].size())return 0;
////
////    if(i>=words.size()){
////
////        if(j+1 < words[0].size() && dp[0][j+1][k] != -1)return dp[0][j+1][k];
////
////        return customFunc(words,target,0,j+1,k,dp);
////    }
////    
////    if(dp[i][j][k] != -1)return dp[i][j][k];
////    
////    int take = 0;
////    int notTake = 0;
////    
////    if(words[i][j] == target[k])take = customFunc(words,target,0,j+1,k+1,dp) % mod;
////        
////    notTake = customFunc(words,target,i+1,j,k,dp) % mod;
////
////    return dp[i][j][k] = (take + notTake)%mod;
////}
////
////int numWays(vector<string>& words, string target) {
////    
////    vector<vector<vector<int>>> dp(words.size(),vector<vector<int>>(words[0].size(),vector<int>(target.size(),-1)));
////
////    
////    return customFunc(words, target, 0, 0, 0,dp);
////    
////}
//
////the above solution is giving tle
//
////int customFunc(vector<string>& words,string target,int i,int j,int k,unordered_map<string,int> mpp){
////    
////    if(k == target.length())return 1;
////
////    if(j>=words[0].size())return 0;
////
////    if(i>=words.size()){
////            
////        string p = to_string(0) + "_" + to_string(j+1) + "_" + to_string(k);
//////        if(j+1 < words[0].size() && dp[0][j+1][k] != -1)return dp[0][j+1][k];
////        if(j+1 < words[0].size() && mpp[p] != 0)return mpp[p];
////
////        return customFunc(words,target,0,j+1,k,mpp);
////    }
////    
////    string s = to_string(i) + "_" + to_string(j) + "_" + to_string(k);
////    
////    if(mpp[s] != 0)return mpp[s];
////    
////    int take = 0;
////    int notTake = 0;
////    
////    if(words[i][j] == target[k])take = customFunc(words,target,0,j+1,k+1,mpp) % mod;
////        
////    notTake = customFunc(words,target,i+1,j,k,mpp) % mod;
////
////    
////    return mpp[s] = (take + notTake) % mod;
////}
////
////int numWays(vector<string>& words, string target) {
////    
//////    vector<vector<vector<int>>> dp(words.size(),vector<vector<int>>(words[0].size(),vector<int>(target.size(),-1)));
////    
////    unordered_map<string,int>mpp;
////    
////    return customFunc(words, target, 0, 0, 0,mpp);
////    
////}
//
//
//
////above is also giving tle
//
//int customFunc(vector<vector<int>>& freq,string target,int j,int k,vector<vector<int>>& dp){
//    
//    if(k == target.size())return 1;
//
//    if(j>=freq[0].size())return 0;
//
//    
//    if(dp[j][k] != -1)return dp[j][k];
//    
//    int take = 0;
//    int notTake = 0;
//
//    for(int t=0;t<26;t++){
//        
//        if((target[k] == char(t+97)) && freq[t][j]>0){
//            take += (freq[t][j] * customFunc(freq, target, j+1, k+1, dp));
//            
//        }
//    }
//    
//    notTake = customFunc(freq,target,j+1,k,dp);
//    
//    return dp[j][k] = (take + notTake) % mod;
//}
//
//int numWays(vector<string>& words, string target) {
//    
//    vector<vector<int>> freqCount(27,vector<int>(words[0].size(),0));
//    
//    for(int i=0;i<words[0].size();i++){
//        for(int j=0;j<words.size();j++){
//            freqCount[words[j][i] - 97][i]++;
//        }
//    }
//    
////    for(auto i : freqCount){
////        for(auto j : i){
////            cout<<j<<" ";
////        }
////        cout<<endl;
////    }
//    
//    vector<vector<int>>dp(words[0].size(),vector<int>(target.size(),-1));
//    
//    return customFunc(freqCount,target, 0, 0,dp);
//    
//}
//
//int main(){
//    
//    //acca
//    //bbbb
//    //caca
//    
//    vector<string> words = {"acca","bbbb","caca"};
//    string target = "aba";
//    
//    
//    
//    words = {"abba","baab"};
//    target = "bab";
//    
//    cout<<numWays(words, target)<<endl;
//    
////    cout<<char(25+97);
//    
//    return 0;
//}
