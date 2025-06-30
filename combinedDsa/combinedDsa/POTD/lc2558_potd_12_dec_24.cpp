////
////  lc2558_potd_12_dec_24.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 12/12/24.
////
//
//#include <stdio.h>
//#include "bits/stdc++.h"
//
//using namespace std;
//
//long long pickGifts(vector<int>& gifts, int k) {
//    long long ans = 0;
//    
//    sort(gifts.begin(),gifts.end());
//    
//    for(auto i : gifts){
////        cout<<i<<" ";
//        ans+=i;
//    }
//    
//    int high = gifts.size()-1;
//    int low = gifts.size()-1;
//    
//    while(k>0){
//        
////        if(high == low && high!=gifts.size()-1)low--;
//        
//        if(gifts[low] >= gifts[high] /*&& gifts[low]!=1*/){
//            k--;
//            ans-=gifts[low];
//            gifts[low] = floor(sqrt(gifts[low]));
//            ans+=gifts[low];
//            low--;
//        }else{
//            k--;
//            ans-=gifts[high];
//            gifts[high] =  floor(sqrt(gifts[high]));
//            ans+=gifts[high];
//            high--;
//        }
//        
//
//        
//        if(high < 0){
//            high = gifts.size()-1;
//        }
//        
//        if(gifts[high] < gifts[gifts.size()-1]){
//            high = gifts.size()-1;
//        }
//        
//        if(low < 0){
//            low = gifts.size()-1;
//        }
//    }
//    
//    return ans;
//}
//
//int main(){
//    
//    vector<int>gifts = {25,64,9,4,100};
//    int k = 4;
//    
//    gifts = {1,1,1,1};
//    k=4;
//    
//    gifts = {9,25,29,27,8,2,12,1};
//    //1 2 8 9 12 25 27 29
//    k=15;
//    
//    gifts = {7,40,23,67,10,39,52,43,39,54,14,13,72,62,61,44};
//    k=54;
//    
//    cout<<pickGifts(gifts, k)<<endl;
//    
//    
//    return 0;
//}
