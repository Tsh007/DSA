////
////  Combination_Sum.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 15/09/24.
////
//
//#include <stdio.h>
//
//#include "bits/stdc++.h"
//
//using namespace std;
//
//
//
//void customFunc(vector<vector<int>>& ans,int target,vector<int> candidates,vector<int> sub,int n,int sum){
//    
//    if(sum>target)return;
//    
////    if(dp[n][sub.size()] != -1)return;
//    
//    if(sum == target){
////        if(dp[sum][sub.size()] != -1)return;
////        cout<<n<<" "<<sub.size()<<endl;
////        cout<<endl;
//        ans.push_back(sub);
////        dp[n][sub.size()] = 1;
//        return;
//    }
//    
//    if(n==candidates.size()){
//        if(sum == target){
////            if(dp[n][sub.size()] != -1)return;
////            cout<<sum<<" "<<n<<endl;x
////            cout<<endl;
//            ans.push_back(sub);
////            dp[n][sub.size()] = 1;
//        }
//        return;
//    }
//    
//    
//    
//    
//    //not take
//    customFunc(ans, target, candidates, sub, n+1, sum);
//    
//    
//    sub.push_back(candidates[n]);
//    //take same
//    customFunc(ans,target,candidates,sub,n,sum+candidates[n]);
////    sub.pop_back();
////    
////    sub.push_back(candidates[n]);
//    //take diff
////    customFunc(ans,target,candidates,sub,n+1,sum+candidates[n],dp);
//    
//    
//    
//    
//}
//
//vector<vector<int>> combinationSum(vector<int>& candidates,int target){
//    
////    vector<vector<int>>dp(target+1,vector<int>(151,-1));
//    
//    vector<vector<int>> ans;
//    vector<int> sub;
//    customFunc(ans,target,candidates,sub,0,0);
//    
//    return ans;
//}
//
//int main(){
//    
//    vector<int> q = {2,3};//6
////    q={2,3,6,7};//7
////    q={2,3,5};//8
////    q={2};//1
////    q={3,5,7};//10
//    
//    vector<vector<int>> ans = combinationSum(q, 6);
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
