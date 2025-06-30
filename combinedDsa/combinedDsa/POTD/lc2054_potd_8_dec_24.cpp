////
////  potd_8_dec_24.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 08/12/24.
////
//
//#include <stdio.h>
//#include "bits/stdc++.h"
//
//using namespace std;
//
////int customFunc(vector<vector<int>>&events,int prevEnd,int i){
////    
////    //base condition
////    if(i>=events.size())return 0;
////    
////    //take
////    int take = events[i][2];
////
//////    if(i+1 < events.size()){
////        int maxValue = 0;
////        for(int k = 0 ; k < events.size() ; k++){
////            if(events[k][0] > events[i][1] && k!=i) maxValue = max(maxValue,events[k][2]);
////        }
////        
////        take += maxValue;
//////    }
////    
////    //skip
////    int notTake = customFunc(events, prevEnd, i+1);
////    
////    return max(take,notTake);
////}
////
////int maxTwoEvents(vector<vector<int>>& events) {
////    
////    return customFunc(events, 0, 0);
////}
//
//
//
////TLE with above approach
////int customFunc(vector<vector<int>>&events,int prevEnd,int i){
////    
////    //base condition
////    if(i>=events.size())return 0;
////    
////    //take
////    int take = events[i][2];
////
////    if(i+1 < events.size()){
////        int maxValue = 0;
////        for(int k = i+1 ; k < events.size() ; k++){
////            if(events[k][0] > events[i][1]) maxValue = max(maxValue,events[k][2]);
////            if(events[k][1] < events[i][0]) maxValue = max(maxValue,events[k][2]);
////        }
////        
////        take += maxValue;
////    }
////    
////    //skip
////    int notTake = customFunc(events, prevEnd, i+1);
////    
////    return max(take,notTake);
////}
////
////int maxTwoEvents(vector<vector<int>>& events) {
////    
////    return customFunc(events, 0, 0);
////
////}
//
//
//
////TLE with above approach
//
////see striver video on this
////int customFunc(vector<vector<int>>&events,int opsDone,int i){
////
////    //base condition
////    if(i>=events.size())return 0;
////    if(opsDone>=2)return 0;
////
////    //take
//////    int take = events[i][2];
////
//////    if(i+1 < events.size()){
//////        int maxValue = 0;
//////        for(int k = i+1 ; k < events.size() ; k++){
//////            if(events[k][0] > events[i][1]) maxValue = max(maxValue,events[k][2]);
////////            if(events[k][1] < events[i][0]) maxValue = max(maxValue,events[k][2]);
//////        }
//////
//////        take += maxValue;
//////    }
////    
////    vector<int> vec = {events[i][1],INT_MAX,INT_MAX};
////    int nxtIdx = upper_bound(events.begin(),events.end(),vec) - events.begin();
////    
////    int take = events[i][2] + customFunc(events, opsDone+1, nxtIdx);
////    
////
////    //skip
////    int notTake = customFunc(events, opsDone, i+1);
////
////    return max(take,notTake);
////}
////
////int maxTwoEvents(vector<vector<int>>& events) {
////
////    sort(events.begin(),events.end());
////    return customFunc(events, 0, 0);
////
////}
//
//
////recursion + memoise
//int customFunc(vector<vector<int>>&events,int opsDone,int i,vector<vector<int>>&dp){
//
//    //base condition
//    if(i>=events.size())return 0;
//    if(opsDone>=2)return 0;
//    if(dp[i][opsDone]!=-1)return dp[i][opsDone];
//
//    //take
////    int take = events[i][2];
//
////    if(i+1 < events.size()){
////        int maxValue = 0;
////        for(int k = i+1 ; k < events.size() ; k++){
////            if(events[k][0] > events[i][1]) maxValue = max(maxValue,events[k][2]);
//////            if(events[k][1] < events[i][0]) maxValue = max(maxValue,events[k][2]);
////        }
////
////        take += maxValue;
////    }
//
//    vector<int> vec = {events[i][1],INT_MAX,INT_MAX};
//    int nxtIdx = upper_bound(events.begin(),events.end(),vec) - events.begin();
//
//    int take = events[i][2] + customFunc(events, opsDone+1, nxtIdx,dp);
//
//
//    //skip
//    int notTake = customFunc(events, opsDone, i+1,dp);
//
//    return dp[i][opsDone] = max(take,notTake);
//}
//
//int maxTwoEvents(vector<vector<int>>& events) {
//
//    sort(events.begin(),events.end());
//    
//    vector<vector<int>>dp(events.size(),vector<int>(2,-1));
//    return customFunc(events, 0, 0,dp);
//
//}
//
//
//
//
//int main(){
//
//    vector<vector<int>> events = {{1,3,2},{4,5,2},{2,4,3}};//4
//                                //(1,3,2) , (2,4,3) , (4,5,2)
//    
////    events = {{1,3,2},{4,5,2},{1,5,5}};//5
//    
////    events = {{1,5,3},{1,5,1},{6,6,5}};//8
//    
////    events = {{63,87,45},{97,100,32},{10,83,53},{51,61,16}}; //85
//    
//    
//    
//    //how to sort a 2d array in c++
//    
////    for(auto i : events){
////        for(auto k : i){
////            cout<<k<<" ";
////        }
////        cout<<endl;
////    }
////    cout<<endl;
////    
////    sort(events.begin(),events.end());
////    
////    for(auto i : events){
////        for(auto k : i){
////            cout<<k<<" ";
////        }
////        cout<<endl;
////    }
//    
//    
//    cout<<maxTwoEvents(events)<<endl;
//    
//    return 0;
//}
