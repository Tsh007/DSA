////
////  lc2683_potd_17_jan_25.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 17/01/25.
////
//
//#include "bits/stdc++.h"
//
//using namespace std;
//
////bool customFunc(vector<int>& derived,int i){
////    
////    bool takeOne =
////}
//
//bool doesValidArrayExist(vector<int>& derived) {
//        
//    for(int i=0;i<derived.size();i++){
//        if(i == 0){
//            if(derived[i] == derived[derived.size()-1]){
//                return 0;
//            }
//        }else if(i == derived.size()-1){
//            if(derived[i] == derived[0]){
//                return 0;
//            }
//        }else{
//            if(derived[i-1] == derived[i+1]){
//                return 0;
//            }
//        }
//    }
//    
//    return true;
//}
//
//int main(){
//    
//    //1^1 = 0
//    //1^0 = 1
//    //0^0 = 0
//    //0^1 = 1
//    
//    vector<int>derived = {1,1,0};
//    
//    cout<<doesValidArrayExist(derived)<<endl;
//    
//    return 0;
//}
