////
////  testp.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 04/11/24.
////
//
//#include <stdio.h>
//
//
//#include "bits/stdc++.h"
//
//using namespace std;
//
//int getOutlierValue(vector<int> arr) {
//    
//    sort(arr.begin(),arr.end());
//    
//    unordered_map<int,int>hash;
//    
//    int sum = 0;
//    
//    for(int i = 0;i<arr.size();i++){
//        sum+=arr[i];
//        hash[sum] = i;
//    }
//    
//    int maxValue = INT_MIN;
//    
//    for(int k = arr.size()-1;k>0;k--){
//        int ans = sum - arr[k];
//        
//        if(hash[ans-arr[k-1]] >= k ) maxValue = max(arr[k],maxValue);
//        
////        cout<<ans-arr[k-1]<<" ";
//        
//    }
//    
//    return maxValue;
//}
//
//
//int main(){
//    
//    vector<int> arr = {6,4,1,2,1,10,3};
//    
//    cout<<getOutlierValue(arr)<<endl;
//    
//    return 0;
//}
