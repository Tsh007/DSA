////
////  lc1475_potd_18_dec_24.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 18/12/24.
////
//
//#include "bits/stdc++.h"
//
//
//using namespace std;
//
//vector<int> finalPrices(vector<int>& prices) {
//    
//    stack<int> s;
//    
//    
//    vector<int>ans;
//    
//    for(auto k : prices){
//        ans.push_back(k);
//    }
//    
//    
//    for(int i = ans.size()-1 ; i >=0 ; i--){
//    
//        if(s.empty()){
//            s.push(ans[i]);
//        }else if(s.top() < ans[i]){
//            int temp = ans[i];
//            ans[i] -= s.top();
//            s.push(temp);
//        }else{
//            while(!s.empty() && s.top()>ans[i]){
//                s.pop();
//            }
//            
//            if(s.empty())s.push(ans[i]);
//            else {
//                int temp = ans[i];
//                ans[i] -= s.top();
//                s.push(temp);
//            }
//        }
//        
//    }
//
//    
//    return ans;
//}
//
//int main(){
//    
//    vector<int>prices = {8,4,6,2,3};
//    
////    prices = {1,2,3,4,5};
//    
////    prices = {10,1,1,6};
//    
//    vector<int> ans = finalPrices(prices);
//    
//    for(auto i : ans){
//        cout<<i<<" ";
//    }
//    
//    cout<<endl;
//    
//    return 0;
//}
