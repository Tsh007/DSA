////
////  lc983_potd_31_dec_24.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 31/12/24.
////
//
//
//#include "bits/stdc++.h"
//
//using namespace std;
//
//
//
////starting from 0
//
////int customFunc(vector<int>& days,vector<int>& costs,int idx,vector<int>& dp){
////    
////    if(idx >= days.size())return 0;
////    
////    if(dp[idx] != -1)return dp[idx];
////    
////    //day
////    int purchaseDay = costs[0] + customFunc(days,costs,idx+1,dp);
////    
////    //week
////    int tempIdx = idx;
////    while(tempIdx < days.size() && days[tempIdx] < days[idx] + 7){
////        tempIdx++;
////    }
////    int purchaseWeek = costs[1] + customFunc(days,costs,tempIdx,dp);
////    
////    //month
////    tempIdx = idx;
////    while(tempIdx < days.size() && days[tempIdx] < days[idx] + 30){
////        tempIdx++;
////    }
////    int purchaseMonth = costs[2] + customFunc(days, costs, tempIdx,dp);
////    
////    
////    return dp[idx] = min({purchaseDay,purchaseWeek,purchaseMonth});
////}
////
////int mincostTickets(vector<int>& days, vector<int>& costs) {
////    
////    vector<int>dp(days.size(),-1);
////        
////    return customFunc(days,costs,0,dp);
////}
//
//
////starting from last
//
////int customFunc(vector<int>& days,vector<int>& costs,int idx,vector<int>& dp){
////    
////    if(idx < 0)return 0;
////    
////    if(dp[idx] != -1)return dp[idx];
////    
////    //day
////    int purchaseDay = costs[0] + customFunc(days,costs,idx-1,dp);
////    
////    //week
////    int tempIdx = idx;
////    while(tempIdx >= 0 && days[tempIdx] > days[idx] - 7){
////        tempIdx--;
////    }
////    int purchaseWeek = costs[1] + customFunc(days,costs,tempIdx,dp);
////    
////    //month
////    tempIdx = idx;
////    while(tempIdx >= 0 && days[tempIdx] > days[idx] - 30){
////        tempIdx--;
////    }
////    int purchaseMonth = costs[2] + customFunc(days, costs, tempIdx,dp);
////    
////    
////    return dp[idx] = min({purchaseDay,purchaseWeek,purchaseMonth});
////}
////
////int mincostTickets(vector<int>& days, vector<int>& costs) {
////    
////    vector<int>dp(days.size(),-1);
////        
////    return customFunc(days,costs,days.size()-1,dp);
////}
//
//
//
////tabulation == bottom up == iterative
//int customFunc(vector<int>& days,vector<int>& costs,int idx,vector<int>& dp){
//
//    if(idx < 0)return 0;
//
//    if(dp[idx] != -1)return dp[idx];
//
//    //day
//    int purchaseDay = costs[0] + customFunc(days,costs,idx-1,dp);
//
//    //week
//    int tempIdx = idx;
//    while(tempIdx >= 0 && days[tempIdx] > days[idx] - 7){
//        tempIdx--;
//    }
//    int purchaseWeek = costs[1] + customFunc(days,costs,tempIdx,dp);
//
//    //month
//    tempIdx = idx;
//    while(tempIdx >= 0 && days[tempIdx] > days[idx] - 30){
//        tempIdx--;
//    }
//    int purchaseMonth = costs[2] + customFunc(days, costs, tempIdx,dp);
//
//
//    return dp[idx] = min({purchaseDay,purchaseWeek,purchaseMonth});
//}
//
//int mincostTickets(vector<int>& days, vector<int>& costs) {
//
//    vector<int>dp(days.size(),-1);
//    
//    for(int i=0;i<days.size();i++){
//        
//        int purchaseDay = costs[0];
//        
//        if(i>0)purchaseDay += dp[i-1];
//
//        //week
//        int tempIdx = i;
//        while(tempIdx >= 0 && days[tempIdx] > days[i] - 7){
//            tempIdx--;
//        }
//        int purchaseWeek = costs[1];
//        if(tempIdx >= 0)purchaseWeek += dp[tempIdx];
//        
//        //month
//        tempIdx = i;
//        while(tempIdx >= 0 && days[tempIdx] > days[i] - 30){
//            tempIdx--;
//        }
//        int purchaseMonth = costs[2];
//        if(tempIdx >= 0)purchaseMonth += dp[tempIdx];
//
//        dp[i] = min({purchaseDay,purchaseWeek,purchaseMonth});
//        
//    }
//
//    return dp[days.size()-1];
//
//}
//
//int main(){
//    
//    vector<int> days = {1,4,6,7,8,20};
//    vector<int> costs = {2,7,15};//11
//    
//    
////    days = {1,2,3,4,5,6,7,8,9,10,30,31};
////    costs = {2,7,15};//17
//    
//    cout<<mincostTickets(days,costs)<<endl;
//    
//    return 0;
//}
