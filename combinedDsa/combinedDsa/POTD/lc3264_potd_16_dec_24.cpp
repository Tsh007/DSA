//
//  lc3264_potd_16_dec_24.cpp
//  combinedDsa
//
//  Created by Tejash Singh on 16/12/24.
//

//#include "bits/stdc++.h"
//
//#define PII pair<int,int> 
//
//using namespace std;
//
//    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
//        
//    //    vector<int>ans;
//        
//        priority_queue<PII,vector<PII>> minHeap;
//        
//        for(int i = 0 ; i<nums.size() ; i++){
//            minHeap.push({-1*nums[i],-1*i});
//        }
//        
//        
//        while(k>0){
//            
//            int idx = minHeap.top().second * -1;
//            
//            int value = minHeap.top().first * -1;
//            
//            nums[idx] = value * multiplier;
//            
//            minHeap.pop();
//            
//            minHeap.push({value * multiplier * -1,idx * -1});
//            
//            k--;
//            
//        }
//        
//        
//    //    return ans;
//        return nums;
//    }
//
//int main(){
//    
//    vector<int>nums = {2,1,3,5,6};
//    int k = 5;
//    int multiplier = 2;
//    
//    
//    nums = {1,2};
//    k = 3;
//    multiplier = 4;
//    
//    vector<int>ans = getFinalState(nums, k, multiplier);
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

