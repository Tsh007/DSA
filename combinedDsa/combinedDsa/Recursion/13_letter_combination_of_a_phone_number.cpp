////
////  13_letter_combination_of_a_phone_number.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 28/09/24.
////
//
//#include <stdio.h>
//
//#include "bits/stdc++.h"
//
//using namespace std;
//
//
////void customFunc(vector<string>&ans,vector<string>mobile,string digits,int i,int k,string sub){
////    
////    if(i==digits.size()){
////        
////        return;
////    }
////    
////    //    if(k>=mobile[digits[i]-48].size())return;
////    
////    
////    sub = sub + mobile[digits[i]-48][k];
////    
////    for(int j = 0;i+1<digits.size() && j<mobile[digits[i+1] - 48].size();j++){
////        customFunc(ans,mobile,digits,i+1,j,sub);
////    }
////    
////    // if(!ans.empty()){
////    
////    if(sub.size()>=digits.size())ans.push_back(sub.substr(1,sub.length()));
////    // }else{
////    // ans.push_back(sub.substr(1,sub.length()));
////    // }
////    
////}
//
//
////vector<string> letterCombinations(string digits) {
////    
////    vector<string>mobile = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
////    //    cout<<mobile[2][2];
////    vector<string>ans;
////    if(digits.length() == 0)return ans;
////    
////    string s = "0"+digits;
////    //    int k = 0;
////    //    for(int j=0;j<mobile[digits[0] - 48].size();j++){
////    customFunc(ans,mobile,s,0,0,"");
////    //    }
////    
////    cout<<ans[0];
////    
////    return ans;
////}
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
////better code
//
//
//void customFunc(vector<string>&ans,vector<string>mobile,string digits,string sub,int k){
//
//    if(sub.size() == digits.size()){
//        ans.push_back(sub);
//        return;
//    }
//    
//    
//    for(int j = 0; j<mobile[digits[k] - 48].size();j++){
//        
//        sub = sub + mobile[digits[k]-48][j];
//        
//        customFunc(ans,mobile,digits,sub,k+1);
//        
//        sub.pop_back();
//        
//    }
//    
////    k++;
//
//    
////    if(sub.size()>=digits.size())ans.push_back(sub.substr(1,sub.length()));
//
//    
//}
//
//
//vector<string> letterCombinations(string digits) {
//    
//    vector<string>mobile = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
//    
//    vector<string>ans;
//    
////    if(digits.length() == 0)return ans;
//    
//    int k = 0;
//    
//    customFunc(ans,mobile,digits,"",k);
//
//    
//    return ans;
//}
//
//int  main(){
//    string digits = "67";
//    //5678
//    
//    vector<string>ans = letterCombinations(digits);
//    
//    for(auto i : ans){
//        cout<<i<<" ";
//    }
//    
//    
//    return 0;
//}
