////
////  potd_4_dec_24.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 04/12/24.
////
//
//#include <stdio.h>
//#include "bits/stdc++.h"
//
//using namespace std;
//
//bool canMakeSubsequence(string str1, string str2) {
//    
//    int i = 0;
//    int j = 0;
//    
//    while(i<str1.length() && j<str2.length()){
////        if(str2[j]+1 >= 'z')
//        if(str1[i] == str2[j]){
//            i++;
//            j++;
//            continue;
//        }
//        
//        if(str1[i] != str2[j]){
//            
//            if(str1[i] == 'z'){
//                if('a' != str2[j]){
//                    i++;
//                }else{
//                    i++;
//                    j++;
//                }
//            }else{
//                if(str1[i]+1 != str2[j]){
//                    i++;
//                }else{
//                    i++;
//                    j++;
//                }
//            }
//        }
//    }
//    
//    if(j==str2.length())return 1;
//    
//    return 0;
//    
//    return false;
//}
//
//int main(){
//    
//    string s1 = "abc";
//    string s2 = "ad";
//    
//    
//    s1 = "zc";s2 = "ad";
//    
//    s1 = "ab";s2 = "d";
//    
//    cout<<canMakeSubsequence(s1, s2)<<endl;
//    
//    return 0;
//}
