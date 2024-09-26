////
////  generate_parentheses.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 08/09/24.
////
//
//#include <stdio.h>
//
//#include "bits/stdc++.h"
//
//using namespace std;
//
//
//void customFunc(int l,int r,string s,vector<string>& ans){
//    if(l>r)return;
//    if(l==0 && r==0){
//        ans.push_back(s);
//        return;
//    }else if(l==0 && r!=0){
//        customFunc(l,r-1,s+")",ans);
//        return;
//    }else if(r==0 && l!=0){
//        customFunc(l-1,r,s+"(",ans);
//        return;
//    }
//    
//    customFunc(l-1,r,s+"(",ans);
//    customFunc(l,r-1,s+")",ans);
//    return;
//}
//
//vector<string> generateParenthesis(int n) {
//    vector<string>ans;
//    customFunc(n-1,n,"(",ans);
//    return ans;
//}
//
//int main(){
//    vector<string>ans;
//    ans = generateParenthesis(4);
//    
//    for(auto i : ans){
//        cout<<i<<" ";
//    }
//    
//    cout<<endl;
//    
//}
//
//
