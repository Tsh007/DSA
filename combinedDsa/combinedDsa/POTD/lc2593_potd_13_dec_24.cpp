////
////  lc2593_potd_13_dec_24.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 13/12/24.
////
//
//#include <stdio.h>
//#include "bits/stdc++.h"
//
//using namespace std;
//
//long long findScore(vector<int>& nums) {
//    
//    long long score = 0;
//    
//    priority_queue<pair<int,int>>pq;
//    
//    for(int i = 0 ; i<nums.size() ; i++){
//        pair<int,int>p(-1*nums[i],-1*i);
//        pq.push(p);
//    }
//    
////        while(!pq.empty()){
////            cout<<pq.top().first<<" "<<pq.top().second<<endl;
////            pq.pop();
////        }
//    
//    vector<bool>vis(nums.size(),false);
//    
//    while(!pq.empty()){
//        
//        if(vis[(-1*pq.top().second)] == 1)pq.pop();
//        else{
//            auto minPair = pq.top();
//            
//            score+=(-1*minPair.first);
//            
////            cout<<score<<endl;
//            
//            vis[(-1*minPair.second)] = 1;
//            
//            if((-1*minPair.second) + 1 < nums.size()){
//                vis[(-1*minPair.second)+1] = 1;
//            }
//            
//            if((-1*minPair.second) - 1 >= 0){
//                vis[(-1*minPair.second)-1] = 1;
//            }
//            
//            pq.pop();
//        }
//        
//    }
//    
//    
//    
//    return score;
//}
//
//int main(){
//    
//    vector<int>nums = {2,1,3,4,5,2};//7
//    
////    nums = {2,3,5,1,3,2}; //5
//    
//    
//    cout<<findScore(nums)<<endl;
//    
//    //trying
////    pair<int,int>p(2,-3);
////    
////    pair<int,int>q(2,-1);
////
////    priority_queue<pair<int,int>>pq;
////    
////    pq.push(p);
////    pq.push(q);
////    
////    while(!pq.empty()){
////        cout<<pq.top().first<<" "<<pq.top().second<<endl;
////        pq.pop();
////    }
//    
//    
//    return 0;
//}
