////
////  lc2762_potd_14_dec_24.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 14/12/24.
////
//
//#include "bits/stdc++.h"
//
//using namespace std;
//
//long long continuousSubarrays(vector<int>& nums) {
//        int n = nums.size();
//
//        map<int, int> mp;
//
//        int i = 0;
//        int j = 0;
//
//        long long count = 0;
//
//        while(j < n) {
//            mp[nums[j]]++;
//            
//            while(abs(mp.rbegin()->first - mp.begin()->first) > 2) {
//                mp[nums[i]] -= 1;
//                if(mp[nums[i]] == 0) {
//                    mp.erase(nums[i]);
//                }
//                i++;
//            }
//
//            count += j-i+1;
//            j++;
//        }
//
//        return count;
//    }
//
//int main(){
//    
//    vector<int>nums = {5,4,2,4};//8
//    
////    nums = {1,2,3};//6
//    
//    nums = {42,41,42,39,38};//9
//    
//    nums = {60,65,66,67,66,66,65,64,65,65,64};//44
//    
//    nums = {1692,1691,1690,1693,1690,1691}; //10
//
//    
//    
//    cout<<continuousSubarrays(nums)<<endl;
//    return 0;
//}
