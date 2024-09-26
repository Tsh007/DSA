//
//  combination_sum_2.cpp
//  combinedDsa
//
//  Created by Tejash Singh on 16/09/24.
//

#include <stdio.h>
#include "bits/stdc++.h"


using namespace std;

// this approach below is wrong

//void customFunc(vector<int> candidates,int target,vector<vector<int>>& ans,vector<int> sub,int sum,int n){
//    
//    if(sum>target)return;
//    
//    if(sum == target){
//        ans.push_back(sub);
//        return;
//    }
//    
//    if(n==candidates.size()){
//        if(sum == target){
//            ans.push_back(sub);
//        }
//        return;
//    }
//    
//    //not take
//    customFunc(candidates, target, ans, sub, sum, n+1);
//    
//    //take
//    sub.push_back(candidates[n]);
//    customFunc(candidates, target, ans, sub, sum+candidates[n], n+1);
//    
//    return;
//    
//}
//
//
//vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
//    
////    unordered_map<int,int>hash;
//    
////    vector<int>dp(candidates.size()+1,-1);
//    vector<vector<int>> ans;
//    vector<int> sub;
//    customFunc(candidates, target, ans, sub, 0, 0);
//    
//    set<vector<int>> finalans;
//    for(auto i: ans){
//        sort(i.begin(),i.end());
//        finalans.insert(i);
//    }
//    
//    vector<vector<int>> mostFinalAns;
//    
//    for(auto i : finalans){
//        mostFinalAns.push_back(i);
//    }
//    
//
//
//    
//    return mostFinalAns;
//}


//latest try


void customFunc(vector<vector<int>>& ans,vector<int> sub,vector<int>candidates,int target,int sum,int n,int prev){
    
    
    
    if(sum > target)return;
    
    if(sum == target){
        ans.push_back(sub);
//        ans.insert(sub);
        return;
    }
    
    if(n >= candidates.size())return;
    
    
    if(prev == candidates[n]){
        //skip
        customFunc(ans, sub, candidates, target, sum, n+1, prev);
    }else{
        //consider
        if(sub.size()!=0) sub.pop_back();
        sum = sum - prev;
        sub.push_back(candidates[n]);
        sum += candidates[n];
        customFunc(ans, sub, candidates, target, sum, n+1, candidates[n]);
        sub.push_back(0);
        customFunc(ans, sub, candidates, target, sum, n+1, 0);
    }

        
}

vector<vector<int>> combinationSum2(vector<int> candidates, int target){
    
//    vector<vector<int>> finalAns;
    
    vector<int>sub;
    
    sort(candidates.begin(),candidates.end());
    
    vector<vector<int>>ans;
    
    customFunc(ans,sub,candidates,target,0,0,0);
    
    vector<vector<int>>finalAns;
    
    
    for(auto i : ans){
        int n = i.size()-1;
        if(i[n] != 0) finalAns.push_back(i);
            
    }
    return finalAns;
}

int main(){
    
    vector<int> candidates = {2,5,2,1,2}; // target = 5
    candidates = {10,1,2,7,6,1,5}; // target = 8
    candidates = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}; // target = 27
    candidates = {1};
    
    
    int target = 5;
     target = 8;
     target = 27;
     target = 2;
    

    
    vector<vector<int>> ans = combinationSum2(candidates, target);
    
    
    
    for(auto i : ans){
        for( auto k : i){
            cout<<k<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
