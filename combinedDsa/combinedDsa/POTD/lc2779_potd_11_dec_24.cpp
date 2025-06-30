////
////  potd_11_dec_24_LC2779.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 11/12/24.
////
//
//#include <stdio.h>
//#include "bits/stdc++.h"
//
//using namespace std;
//
////        int maximumBeauty(vector<int>& nums, int k) {
////            
////            sort(nums.begin(),nums.end());
////
////            int maxCount = 0;
////
////            
////            for(int i = 0 ;i<nums.size();i++){
////                
////                auto low = upper_bound(nums.begin(), nums.end(), nums[i]-k);
////                
////                auto high = upper_bound(nums.begin(), nums.end(), nums[i]+k);
////                
////                int h = high - nums.begin();
////                
////        //        if(h>=nums.size()) h = nums.size()-1;
////        //        else if(h<0) h = 0;
////                
////                int l = low - nums.begin();
////                
////        //        if(l>=nums.size()) l = nums.size()-1;
////        //        else if(l<0) l = 0;
////                
////                cout<<l<<" "<<h<<endl;
////                int ans = h - l ;
////                
////                maxCount = max(maxCount,ans);
////            }
////        //    int count
////        //    for(int i = 1 ; i < nums.size() ; i++){
////        //        if(nums[i] == nums[i-1])
////        //    }
////            
////        //    if(maxCount >nums.size())return nums.size();
////            
////            return maxCount;
////            
////        }
//
//
////the above solution is wrong as in the test case nums = {49,26} and k = 12 answer should be 2 but 1 is given , in above solution i am trying to change numbers to numbers already present in the array but we can also change to any value wheather its present or not so try again
//
//
//int maximumBeauty(vector<int>& nums, int k){
//    
//    sort(nums.begin(),nums.end());
//    int maxCount = 0 ;
//    
//    int count = 0;
//    int low = 0 ;
//    int high = 0 ;
//    
//    
//    while(high<nums.size() && low<nums.size()){
//        
//        if(nums[high] - nums[low] <= (2*k)){
//            count++;
//            high++;
//        }else{
//            low++;
//            maxCount = max(count,maxCount);
//            count--;
//        }
//        
//    }
//    
//    maxCount = max(maxCount,count);
//    
//    return maxCount;
//}
//
//
//int main(){
//    
//    vector<int>nums = {4,6,1,2};//1246
//    int k = 2;
//    
//    nums = {1,1,1,1};
//    k=10;
////    
//    nums = {30,74,64,4,85,81,10};//4 10 30 64 74 81 85
//    k=21;
////    
//    nums = {12,71};
//    k = 10;
//    
//    nums = {49,26};
//    k = 12;
//    
//    cout<<maximumBeauty(nums, k)<<endl;
//    
//    return 0;
//}
