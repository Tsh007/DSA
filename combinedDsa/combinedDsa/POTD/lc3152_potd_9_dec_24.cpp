////
////  potd_9_dec_24.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 09/12/24.
////
//
//#include <stdio.h>
//#include "bits/stdc++.h"
//
//
//using namespace std;
//
//bool checkPairity(int x ,int y){
//    if(x%2 == 0 && y%2 == 0){
//        return 0;
//    }
//    
//    if(x%2!=0 && y%2!=0){
//        return 0;
//    }
//    
//    return 1;
//}
//
////vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
////    
////    vector<bool>ans;
////    bool flag = 0;
////    
////    for(int i = 0 ; i<queries.size() ; i++){
////        
////        if(queries[i][0] != queries[i][1]){
////        for(int k = queries[i][0]; k<queries[i][1] ; k++){
////            if(flag == 1)break;
////            if(k+1 < nums.size()){
////                if(!checkPairity(nums[k], nums[k+1])) {
////                    ans.push_back(0);
////                    flag = 1;
////                }
////                
////            }
////        }
////        }
////        if(flag == 0)ans.push_back(1);
////        flag = 0;
//////        ans.push_back(1);
////    }
////    
////    
////    return ans;
////}
//
//
////the above solution gives TLE so using another approach
////vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
////    
////    vector<bool>ans;
////    bool flag = 0;
////    
////    unordered_map<int,int>hash;
////    
////    int start = 0;
////    for(int i = 0 ; i<nums.size() ;i++){
////        
////        if(i+1 < nums.size()){
////            if(!checkPairity(nums[i], nums[i+1])){
////                hash[start] = i;
////                start = i+1;
////            }
////        }
////        
////    }
////    
////    if(hash[start]==0){hash[start] = nums.size()-1;}
////
////    
////    for(int i = 0 ; i<queries.size() ; i++){
////        
//////        if(queries[i][0] != queries[i][1]){
//////            for(int k = queries[i][0]; k<queries[i][1] ; k++){
//////                if(flag == 1)break;
//////                if(k+1 < nums.size()){
//////                    if(!checkPairity(nums[k], nums[k+1])) {
//////                        ans.push_back(0);
//////                        flag = 1;
//////                    }
//////                    
//////                }
//////            }
//////        }
//////        if(flag == 0)ans.push_back(1);
//////        flag = 0;
////        
////        for(auto k : hash){
////            if(queries[i][0] >= k.first && queries[i][1] <= k.second){
////                ans.push_back(1);
////                flag = 1;
////                break;
////            }
////        }
////        
////        if(flag == 0)ans.push_back(0);
////        flag = 0;
////
////    }
////    
////    
////    return ans;
////}
//
//
////the above solution gives tle so trying another
//vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
//
//    vector<bool>ans;
//    bool flag = 0;
//    
//    vector<int>pSum;
//    pSum.push_back(0);
//    
//    for(int i = 1 ; i<nums.size(); i++ ){
//        
//        if(!checkPairity(nums[i], nums[i-1])){
//            pSum.push_back(pSum[i-1] + 1);
//        }else{
//            pSum.push_back(pSum[i-1]);
//        }
//        
//        
//    }
//    
////    for(auto k : pSum){
////        cout<<k;
////    }
//
//    for(int i = 0 ; i<queries.size() ; i++){
//
////        if(queries[i][0] != queries[i][1]){
////        for(int k = queries[i][0]; k<queries[i][1] ; k++){
////            if(flag == 1)break;
////            if(k+1 < nums.size()){
////                if(!checkPairity(nums[k], nums[k+1])) {
////                    ans.push_back(0);
////                    flag = 1;
////                }
////
////            }
////        }
////        }
////        if(flag == 0)ans.push_back(1);
////        flag = 0;
//        
//        if(pSum[queries[i][1]] - pSum[queries[i][0]] > 0)ans.push_back(0);
//        else ans.push_back(1);
//    }
//
//
//    return ans;
//}
//
//
//int main(){
//    
//    
//    vector<int>nums = {3,4,1,2,6};
//    vector<vector<int>> queries = {{0,4}};
//    
//    nums = {4,3,1,6};
//    queries = {{0,2},{2,3}};
//    
//    nums = {2,2};
//    queries = {{0,0}};
//  
//    nums = {5,1,5};
//    queries = {{0,1}};
//   
//    nums = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
//    
//    queries = {{0,20},{5,10}};
//    
//    
//    
//    
//    vector<bool>ans = isArraySpecial(nums, queries);
//    
//    
//    for(auto i : ans){
//        cout<<i<<" ";
//    }
//    
//    cout<<endl;
//    
//    return 0;
//}
