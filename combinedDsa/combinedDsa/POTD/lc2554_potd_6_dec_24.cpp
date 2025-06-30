////
////  potd_6_dec_24.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 06/12/24.
////
//
//#include <stdio.h>
//#include "bits/stdc++.h"
//
//using namespace std;
//
//
//int maxCount(vector<int>& banned, int n, int maxSum) {
// 
//    unordered_map<int,int>hash;
//    
//    for(int i = 0; i<banned.size() ;i++){
//        
//        hash[banned[i]]++;
//        
//    }
//    
//    int count = 0 ;
//    
//    for(int i = 1 ; i<=n ;i++){
//        if(hash[i]==0){
//            if(maxSum<i)return count;
//            
//            maxSum = maxSum - i;
//            
//            count++;
//        }
//    }
//    
//    return count;
//}
//
//int main(){
//    
//    vector<int>banned = {1,6,5};
//    int n = 5;
//    int maxSum = 6;
//    
//    banned = {1,2,3,4,5,6,7};n=8;maxSum = 1;
//    
////    banned = {11};n = 7; maxSum = 50;
//    
//    
//    cout<<maxCount(banned, n, maxSum)<<endl;
//    
//    return 0;
//}
