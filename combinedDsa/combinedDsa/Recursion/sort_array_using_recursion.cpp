////
////  main.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 06/09/24.
////
//
//#include "bits/stdc++.h"
//
//using namespace std;
//
//int customFunc(vector<int> nums,int idx,int minValue){
//    
//    if(idx>=nums.size())
//        return minValue;
//    
//    if(nums[minValue]>=nums[idx]) minValue = idx;
//    
//    return customFunc(nums,idx+1,minValue);
//    
//}
//
//
//void sort(vector<int>&nums,int idx){
//    
//    if(idx>=nums.size())
//        return ;
//    
//    int minIdx = customFunc(nums,idx,idx);
//    
//    swap(nums[minIdx],nums[idx]);
//    
//    sort(nums,idx+1);
//    
////    return nums;
//    
//}
//
//int main(){
//    
//    vector<int> randomVector = {9,4,6,2,8,0,1};
////    vector<int> ans = sort(randomVector,0);
//    sort(randomVector,0);
//    
//    for(auto i : randomVector){
//        cout<<i<<" ";
//    }
//    
//    cout<<endl;
//    
//    
//    return 0;
//}
