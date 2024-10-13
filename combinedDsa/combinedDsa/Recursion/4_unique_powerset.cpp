////
////  unique_powerset.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 12/09/24.
////
//
//#include <stdio.h>
//#include "bits/stdc++.h"
//
//using namespace std;
//
//void generateUnique(string str,set<string>&ans,int n,string gen){
//    
//    
//    if(n==str.size()){
////        ans.push_back(gen);
//        ans.insert(gen);
//        return;
//    }
//    
//    generateUnique(str, ans, n+1,gen);
//    generateUnique(str, ans, n+1,gen+str[n]);
//}
//
//int main(){
//    
//    string str1 = "ljmolmti";
//    str1 = "abbcc";
//    
//    set<string> ans;
//    
//    generateUnique(str1, ans, 0, "");
//    
////    for(auto i : ans){
////        cout<<i<<" ";
////    }
//    cout<<ans.size();
//    
//    cout<<endl;
//    cout<<endl;
////    
////    string str2 = "sqapzwbb";
//////    str2 = "abdbc";
////    set<string> ans2;
////    
////    generateUnique(str2, ans2, 0, "");
////    
//////    for(auto i : ans2){
//////        cout<<i<<" ";
//////    }
////    
////    cout<<ans2.size();
////    
////    cout<<endl;
////    
//    
//    return 0;
//}
//
//
//
////wrong way
////string betterString(string str1, string str2) {
////        // code here
////        unordered_map<char,int>hash1;
////        unordered_map<char,int>hash2;
////        
////        for(int i=0;i<str1.size();i++){
////            hash1[str1[i]]++;
////        }
////        
////        for(int i=0;i<str2.size();i++){
////            hash2[str2[i]]++;
////        }
////        
////        if(hash1.size() >= hash2.size()){
////            return str1;
////        }else{
////            return str2;
////        }
////    }
