////
////  generate_all_subsequence.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 08/09/24.
////
//
//
//
//
//#include <stdio.h>
//#include "bits/stdc++.h"
//
//using namespace std;
//
//
//void customFunc(int n,string s,vector<string>& ans){
//    if(n==0){
//        ans.push_back(s);
//        return ;
//    }
//    
//    
//    if(s[s.length()-1] == '1') {
//        customFunc(n-1,s+"0",ans);
//    }else{
//        customFunc(n-1,s+"1",ans);
//        customFunc(n-1,s+"0",ans);
//    }
//}
//
//using namespace std;
//int main(){
//    
//    vector<string>ans;
//    
//    customFunc(4,"",ans);
//    
//    for(auto i : ans){
//        cout<<i<<" ";
//        
//    }
//    
//    
//    cout<<endl;
//    
//    
//    
//    return 0;
//}
