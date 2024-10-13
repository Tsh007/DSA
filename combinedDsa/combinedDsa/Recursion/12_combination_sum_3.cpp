////
////  12_combination_sum_3.cpp
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
//using namespace std;
//
//void customFunc(vector<vector<int>>&ans,vector<int>arr,vector<int>sub,int n,int k,int target){
//    if(target<0)return;
//    
//    if(n>=arr.size()){
//        if(target == 0 && k==0)ans.push_back(sub);
//        return;
//    }
//    if(target == 0 && k==0){
//        ans.push_back(sub);
//        return;
//    }
//    
//    if(k<=0)return;
//    
//    //not take
//    customFunc(ans, arr, sub, n+1, k, target);
//    
//    //take
//    sub.push_back(arr[n]);
//    customFunc(ans,arr,sub,n+1,k-1,target-arr[n]);
//    
//}
//
//vector<vector<int>> combinationSum3(int k, int n) {
//            
//    vector<vector<int>> ans;
//    vector<int>arr = {1,2,3,4,5,6,7,8,9};
//    
//    customFunc(ans,arr,{},0,k,n);
//    
//    return ans;
//    
//}
//
//
//int main(){
//    
//    int k = 4;
//    
//    int n = 1;
//    
//    vector<vector<int>>ans = combinationSum3(k, n);
//    
//    for(auto i : ans){
//        for(auto k : i){
//            cout<<k<<" ";
//        }
//        cout<<endl;
//    }
//    
//    return 0;
//}
