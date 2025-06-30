////
////  lc2182_potd_17_dec_24.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 17/12/24.
////
//
//#include "bits/stdc++.h"
//
//
//using namespace std;
//
//string repeatLimitedString(string s, int repeatLimit) {
//    
//    map<char,int,greater<int>> mpp;
//    
//    for(char i : s){
//        mpp[i]++;
//    }
//    
////    for(auto k : mpp){
////        cout<<k.first<<" "<<k.second<<endl;
////    }
//    
////    cout<<mpp.size()<<endl;
//    
//    string ans;
//    
//    
//    int count = repeatLimit;
//    
//    while(!mpp.empty()){
//        
//        if(count>0){
//            
////            if(ans.empty()){
////                count--;
////            }else{
////                if(ans[ans.size()-1] == (mpp.begin()->first))count--;
////            }
////
//            ans += mpp.begin()->first;
//            mpp.begin()->second--;
//            if(mpp.begin()->second == 0){
//                mpp.erase(mpp.begin());
//                count = repeatLimit+1;
//            }
//            count--;
//        }else{
//            auto it = mpp.begin();
//            if(mpp.size() == 1)return ans;
//            it++;
//            ans+=it->first;
//            it->second--;
//            if(it->second == 0){
//                mpp.erase(it);
//            }
//            count = repeatLimit;
//        }
//        
////        for(auto k : mpp){
////            cout<<k.first<<" "<<k.second<<endl;
////        }
////        
////        cout<<ans<<endl;
////        cout<<count<<endl;
//
//        
//    }
//    
//   
//    
//    return ans;
//}
//
//int main(){
//    
//    
//    string s = "cczazcc";
//    int repeatLimit = 3;
//    
////    s = "aababab";
////    repeatLimit = 2;
//    
////    cout<<(s[s.size()-1] == 'c');
//    
//    cout<<repeatLimitedString(s, repeatLimit)<<endl;
//    
//    return 0;
//}
