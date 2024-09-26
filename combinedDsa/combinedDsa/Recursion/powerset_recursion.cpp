////
////  powerset_recursion.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 08/09/24.
////
//
//#include <stdio.h>
//#include "bits/stdc++.h"
//
//using namespace std;
//
//void customFunc(int n,vector<int>nums,vector<int>sub,vector<vector<int>>&ans){
//    if(n>=nums.size()){
//        ans.push_back(sub);
//        return;
//    }
//    
//    customFunc(n+1,nums,sub,ans);
//    
////    if(n<nums.size()){
//        sub.push_back(nums[n]);
//        customFunc(n+1,nums,sub,ans);
////    }
//    return;
//    
//}
//
//
//int main(){
//    
//    vector<int>nums = {1,2,3};
//    
//    vector<vector<int>> ans ;
////    ans.push_back({});
//    
//    vector<int>sub = {};
//    customFunc(0,nums,sub,ans);
//    
//    
//    for(auto i : ans){
//        for(auto k : i){
//            cout<<k<<" ";
//        }
//        cout<<"      ";
//    }
//    
//    cout<<endl;
//    
//    return 0;
//}
