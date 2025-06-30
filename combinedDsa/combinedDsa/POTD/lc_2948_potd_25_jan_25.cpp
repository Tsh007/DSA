////
////  lc_2948_potd_25_jan_25.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 25/01/25.
////
//
//#include "bits/stdc++.h"
//
//using namespace std;
//
////vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {
////        vector<int>ans = nums;
////
////        unordered_map<int,int>mpp;
////
////        for(int i = 0; i<nums.size();i++){
////            mpp[nums[i]] = i;
////        }
////
////
////        for(int i = 0 ; i<ans.size() ;i++){
////            int curr = ans[i];
////
////            for(int k = limit;k>0;k--){
////
////                if(mpp[curr-limit] > i){
//////                    int temp = ans[i];
////                    swap(ans[i],ans[mpp[curr-limit]]);
////                    
////                    mpp[curr] = mpp[curr-limit];
////                    mpp[curr-limit] = i;
////
////                    k = limit;
////                    curr = ans[i];
////                }
////            }
////            
////            
////            for(auto k : ans){
////                cout<<k<<" ";
////            }
////            cout<<endl;
////        }
////
////        return ans;
////}
//
//
////above dosent work for duplicate elements in the array
//
////void merge(vector<int>& arr, int left,int mid, int right,int limit){
////    int n1 = mid - left + 1;
////    int n2 = right - mid;
////
////    
////    vector<int> L(n1), R(n2);
////
////    for (int i = 0; i < n1; i++)
////        L[i] = arr[left + i];
////    for (int j = 0; j < n2; j++)
////        R[j] = arr[mid + 1 + j];
////
////    int i = 0, j = 0;
////    int k = left;
////
////    while (i < n1 && j < n2 && k < arr.size()) {
////        int temp = k;
////        if(L[i] <= R[j] && ((R[j]-L[i])<=limit)) {
////            arr[k] = L[i];
////            i++;
////            k++;
////        }else if(L[i] > R[j] && (L[i]-R[j])<=limit) {
////            arr[k] = R[j];
////            j++;
////            k++;
////        }
////        if(temp == k)break;
////    }
////
////
////    while (i < n1) {
////        arr[k] = L[i];
////        i++;
////        k++;
////    }
////
////    while (j < n2) {
////        arr[k] = R[j];
////        j++;
////        k++;
////    }
////}
////
////void mergeSort(vector<int>& ans,int i,int j,int limit){
////    
////    if(i >= j)return;
////    
////    int mid = (i+j)/2;
////    
////    mergeSort(ans,i,mid,limit);
////    
////    mergeSort(ans,mid+1,j,limit);
////    
////    merge(ans,i,mid,j,limit);
////
////}
//
////this above also gives wrong solution
//
//
//
//vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {
//    
//    vector<int>ans = nums;
//
//            for(int i = 0; i<nums.size()-1;i++){
//                for(int k = i+1;k<nums.size();k++){
//                    if(ans[i] - ans[k] <= limit && ans[i] - ans[k] > 0){
//                        swap(ans[i],ans[k]);
//                        k = i;
//                    }
//                }
//            }
//
//            return ans;
//}
//
//int main(){
//    
//    vector<int>nums = {1,5,3,9,8};
//    int limit = 2;
//    
//    nums = {1,7,6,18,2,1};
//    limit = 3;
//    
//    
//    nums = {73,56,32,70,43,51,40,39,75,45};
//    limit = 8;
//    
//    vector<int>ans = lexicographicallySmallestArray(nums, limit);
//    
//    for(auto i : ans){
//        cout<<i<<" ";
//    }
//    cout<<endl;
//    
//    return 0;
//}
