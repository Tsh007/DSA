////
////  jump_game.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 10/09/24.
////
//
//#include <stdio.h>
//#include "../bits/stdc++.h"
//
//
//using namespace std;
//
//bool canJump(vector<int>& nums) {
//    int goal = nums.size()-1;
//    int i = nums.size()-2;
//    
//    while(i>0){
//        if(nums[i]+i >= goal){
//            goal = i;
//        }
//        i--;
//    }
//    if(goal == 0)return true;
//    
//    return false;
//}
//
//
//int main(){
//    vector<int>nums = {2,3,1,1,4};
//    cout<<canJump(nums);
//    cout<<endl;
//    
//    
//}
