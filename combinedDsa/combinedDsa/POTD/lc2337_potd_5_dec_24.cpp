////
////  potd_5_dec_24.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 05/12/24.
////
//
//#include <stdio.h>
//#include "bits/stdc++.h"
//
//using namespace std;
//
//
//bool canChange(string start, string target) {
//    
//    int i = 0;
//    int j = 0;
//    
//    while(i<start.length() && j<target.length()){
//        
//        while(start[i] == '_' && i<start.length()){
//            i++;
//        }
//        
//        while(target[j] == '_' && j<start.length()){
//            j++;
//        }
//        
//        if(start[i] == target[j]){
//            if(start[i] == 'L'){
//                if(i>=j){
//                    i++;j++;
//                    continue;
//                }else{
//                    return false;
//                }
//            }else{
//                if(i<=j){
//                    i++;j++;
//                    continue;
//                }else{
//                    return false;
//                }
//            }
//        }else{
//            return false;
//        }
//        
//    }
//    
//    if(i>j){
//        while(j<target.length()){
//            if(target[j]!='_')return false;
//            j++;
//        }
//        
//    }else if(j>i){
//        while(i<start.length()){
//            if(start[i]!='_')return false;
//            i++;
//        }
//    }
//    
//    return true;
//}
//
//int main(){
//    
//    string start = "_L__R__R_";
//    
//    string target = "L______RR";
//    
//    
//    start = "R_L_";target = "__LR";
//    
//    start = "_R";target = "R_";
//    
//    
////    start = "_L";target = "LL";
//    
//    cout<<canChange(start,target)<<endl;
//    
//    return 0;
//}
