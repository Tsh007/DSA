////
////  10_subset_sum_1.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 27/09/24.
////
//
//#include <stdio.h>
//
//#include "bits/stdc++.h"
//
//
//using namespace std;
//
//void customFunc(vector<int> arr, int n,int sum,vector<int> &ans){
//    
//    if(n>=arr.size()){
//        ans.push_back(sum);
//        return;
//    }
//    
//    //not take
//    customFunc(arr,n+1,sum,ans);
//    
//    //take
//    customFunc(arr,n+1,sum+arr[n],ans);
//    
//}
//
//vector<int> subsetSums(vector<int> arr, int n) {
//        // Write Your Code here
//    vector<int>ans;
//    
//    customFunc(arr, 0, 0, ans);
//    
//    return ans;
//}
//
//int main(){
//    
//    vector<int> arr;
//    
//    arr = subsetSums({{2,3}}, 2);
//    
//    for(auto i : arr){
//        cout<<i<<" ";
//    }
//    
//    return 0;
//}
