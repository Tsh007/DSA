////
////  11_subset_sum_2.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 28/09/24.
////
//
//#include <stdio.h>
//
//
//#include "bits/stdc++.h"
//
//
//
//using namespace std;
//
//
//void customFunc(vector<vector<int>>&ans,vector<int>arr,vector<int>sub,int n){
//    if(n>arr.size())return;
//    
//    ans.push_back(sub);
//    
//    
//    for(int i=n;i<arr.size();i++){
//        if(i!=0 && n<i && arr[i] == arr[i-1])continue;
//        
//        if(n<i && !sub.empty())sub.pop_back();
//        sub.push_back(arr[i]);
//        
//        customFunc(ans,arr,sub,i+1);
//    }
//    
//}
//
//vector<vector<int>> subsetsWithDup(vector<int>& nums) {
//    vector<vector<int>>ans;
//    sort(nums.begin(),nums.end());
//    customFunc(ans,nums,{},0);
//    return ans;
//}
//
//int main(){
//    
//    vector<int>arr = {1,2,2};
//    arr = {0};
//    arr = {4,4,4,1,4};
//    vector<vector<int>>ans;
//    ans = subsetsWithDup(arr);
//    
//    for(auto i:ans){
//        for(auto k:i){
//            cout<<k<<" ";
//        }
//        cout<<endl;
//    }
//    
//    return 0;
//}
