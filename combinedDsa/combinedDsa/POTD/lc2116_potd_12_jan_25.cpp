////
////  lc2116.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 12/01/25.
////
//
//#include "bits/stdc++.h"
//
//using namespace std;
//
//bool canBeValid(string s, string locked) {
//        
//        stack<char> st;
//
//        for(int i = 0 ; i<s.length();i++){
//
//            if(locked[i] == 1){
//                st.push(s[i]);
//            }else if(locked[i] == 0){
//                // if(st.empty())st.push('-');
//                // else st.pop();
//
//                if(!st.empty() && st.top() != ')')st.pop();
//                else st.push('-');
//            }
//        }
//        return !st.empty();
//    }
//
//int main(){
//    
//    string s = "(";
//    string locked = "0";
//    
//    cout<<canBeValid(s, locked)<<endl;
//    
//    return 0;
//}
