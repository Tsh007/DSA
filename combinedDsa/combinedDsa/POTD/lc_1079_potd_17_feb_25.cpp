////
////  try.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 17/02/25.
////
//
//#include "bits/stdc++.h"
//
//using namespace std;
//
//void customFunc(int i,int &count,string tiles,vector<int>hash){
//
//    if(i>tiles.size())return;
//
//    for(int k = 0; k<26;k++){
//        if(hash[k] > 0){
//            hash[k]--;
//            count++;
//            customFunc(i+1,count,tiles,hash);
//            hash[k]++;
//        }
//    }
//
//    return;
//}
//
//    int numTilePossibilities(string tiles) {
//        
////        map<char,int>mpp;
//        
//        vector<int>hash(26,0);
//        
//        for(int i = 0; i<tiles.size();i++){
//            hash[tiles[i] - 'A']++;
//        }
//        
//        int count = 0;
//
//        customFunc(0,count,tiles,hash);
//
//        return count;
//    }
//
//int main(){
//    
//    string s = "AAB";
//    
//    cout<<numTilePossibilities(s)<<endl;
//
//    
//    return 0;
//}
