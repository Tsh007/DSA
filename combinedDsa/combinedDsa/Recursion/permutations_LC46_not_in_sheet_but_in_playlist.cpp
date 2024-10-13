////
////  permutations_LC46_not_in_sheet_but_in_playlist.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 29/09/24.
////
//
//#include <stdio.h>
//
//#include "bits/stdc++.h"
//
//using namespace std;
//
////void customFunc(vector<vector<int>>&ans,vector<int>sub,vector<int>arr,vector<vector<int>>hashArr,int i,int depth){
////    
////    if(i>=arr.size())return;
////    
////    if(depth >= arr.size()){
////        if(sub.size() == arr.size()  &&  i==1)ans.push_back(vector<int>(sub.begin()+1,sub.end()));
////        return;
////    }
////    
////    if(hashArr[i][1]==-1){
////        sub.push_back(hashArr[i][0]);
////        hashArr[i][1] = 0;
////    }
////    
////    
////    for(int k = 0;k<arr.size();k++){
////        
////        customFunc(ans,sub,arr,hashArr,k+1,depth+1);
////        
////    }
////    
////    
////}
////
////vector<vector<int>> permute(vector<int>& nums) {
////    vector<vector<int>> ans;
////    
//////    vector<vector<int>>hashArr(nums.size(),vector<int>(1,-1));
////    
////    vector<vector<int>>hashArr;
////    
////    vector<int>arr;
////    arr.push_back(0);
////    
////    for(auto i : nums){
////        
////        arr.push_back(i);
////    }
////    
////    for(auto i : arr){
////        hashArr.push_back({i,-1});
////    }
////    
////    
////    int depth = 0;
////    
//////    for(auto i : arr){
//////        cout<<i;
//////    }
////    
////    customFunc(ans,{},arr,hashArr,0,depth);
////    
////    return ans;
////}
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//
//
//
////new try better code than above
//
////void customFunc(vector<vector<int>>&ans,vector<int>hash,vector<int>arr,vector<int>sub){
////    
////    if(sub.size() == arr.size()){
////        ans.push_back(sub);
////        return;
////    }
////    
////    for(int i=0;i<arr.size();i++){
////        if(!hash[i]){
////            sub.push_back(arr[i]);
////            hash[i] = 1;
////            customFunc(ans, hash, arr, sub);
////            hash[i] = 0;
////            sub.pop_back();
////            
////        }
////    }
////}
////
////vector<vector<int>> permute(vector<int>& nums) {
////    
////    vector<vector<int>>ans;
////    
////    vector<int>sub;
////    
////    vector<int> hash;
////    
////    for(int i = 0;i<nums.size();i++)hash.push_back(0);
////    
////    customFunc(ans,hash,nums,sub);
////    
////    
////    
////    return ans;
////}
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
////swap method
//
//void customFunc(vector<vector<int>>&ans,vector<int>nums,int k){
//    
//    if(k==nums.size()){
//        ans.push_back(nums);
//        return;
//    }
//    
//    for(int i = k;i<nums.size();i++){
//        swap(nums[i],nums[k]);
//        customFunc(ans,nums,k+1);
//        swap(nums[i],nums[k]);
//    }
//    
//}
//
//
//vector<vector<int>> permute(vector<int>&nums){
//    vector<vector<int>>ans;
//    
//    customFunc(ans,nums,0);
//    
//    return ans;
//}
//
//
//
//
//int main(){
//    
//    vector<int>nums = {1,2,3,4};
//    
//    vector<vector<int>>ans = permute(nums);
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
