////
////  jump_game_2.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 11/09/24.
////
//
//#include <stdio.h>
//#include "../bits/stdc++.h"
//
//using namespace std;
//
////int findMinSteps(vector<int>&nums){
////    int steps = 0;
////    int maxPossible = 0;
////    if(nums.size() == 1)return 0;
////
////    for(int i=0;i<nums.size()-1;i++){
////
////        if(nums[i] + i > maxPossible){
////            maxPossible = nums[i]+i;
////            steps++;
////
////            if(nums[i] + i >= nums.size()-1){
////                return steps;
////            }
////        }
////
////    }
////
////
////
////    return steps;
////}
//int findMinSteps(vector<int>& nums) {
//    int steps = 0;
//    int maxPossible = 0;
//    if(nums.size() == 1)return 0;
//    int maxIdx = 0;
//    
//    // for(int i=0;i<nums.size()-1;i++){
//    
//    //     if(nums[i] + i > maxPossible){
//    //         maxPossible = nums[i]+i;
//    //         steps++;
//    
//    //         if(nums[i] + i >= nums.size()-1){
//    //             return steps;
//    //         }
//    //     }
//    
//    // }
//    
//    int low = 0;
//    int high = 0;
//    while(low<nums.size()){
//        if(low+nums[low] >= nums.size()-1)
//            return steps+1;
//        high = low + nums[low];
//        while(low<nums.size() && low<=high){
//            if(nums[low]+low > maxPossible){
//                maxPossible = nums[low]+low;
//                maxIdx = low;
//            }
//            low++;
//        }
//        steps++;
//        low=maxIdx;
//    }
//    
//    
//    
//    return steps;
//}
//
//
//
//
//int main(){
//    
////        vector<int>test = {2,3,1,1,1,3,1,1,4};
//    //    vector<int>test = {0};
////        vector<int>test = {2,3,0,1,4};
//    //        vector<int>test = {1};
////        vector<int> test = {1,3,2};
////        vector<int>test = {2,3,1};
//    vector<int>test = {7,0,9,6,9,6,1,7,9,0,1,2,9,0,3};
//    cout<<findMinSteps(test);
//    cout<<endl;
//    
//    return 0;
//}
