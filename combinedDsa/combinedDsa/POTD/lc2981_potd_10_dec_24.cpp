////
////  potd_10_dec_24_LC2981.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 10/12/24.
////
//
//#include <stdio.h>
//#include "bits/stdc++.h"
//
//
//using namespace std;
//
//int maximumLength(string s) {
//        
//        int low = 0;
//        int high = 0;
//        
//        int ans = 0;
//        
//        unordered_map<string,int>hash;
//        
//        while(high<s.length() && low<s.length()){
//            
//            if(high == s.length()-1){
//                if(low == high){
////                    hash[string(1,s[low])]++;
//                    for(int k = low;k<=high;k++){
//                        hash[s.substr(low,k-low+1)]++;
//        //                cout<<s.substr(low,k-low+1)<<endl;
//                    }
//                }else{
//                    for(int k = low;k<=high;k++){
//                        hash[s.substr(low,k-low+1)]++;
//                    }
//                }
//
//            }else if(s[high] == s[high+1]){
//    //            high++;
//    //            s.substr(low,high-low);
//    //            cout<<(s.substr(low,high-low+1))<<endl;
//                
//                
//                for(int k = low;k<=high;k++){
//                    hash[s.substr(low,k-low+1)]++;
//    //                cout<<s.substr(low,k-low+1)<<endl;
//                }
//                
//                
//            }else{
//                if(high-1>=0 && s[high-1]!=s[high])low = high;
//    //            cout<<s[low]<<endl;
//    //            cout<<string(1,s[low])<<endl;
////                hash[string(1,s[low])]++;
//                for(int k = low;k<=high;k++){
//                    hash[s.substr(low,k-low+1)]++;
//    //                cout<<s.substr(low,k-low+1)<<endl;
//                }
//                low = high+1;
//            }
//            high++;
//            
//        }
//        
//        
//        for(auto i : hash){
////            cout<<i.first<<" "<<i.second<<endl;
//            if(i.first.length() > ans && i.second >= 3){
//                ans = i.first.length();
//            }
//            
//    //        cout<<i.first.length()<<endl;
//        }
//        
//        if(ans)return ans;
//        
//        return -1;
//    }
//
//
//
////above gives MLE on the solution present so optimise it
////do later not in the mood to do now as bruteforce gets accepted for 1st part and 2nd part requires optimising to O(n) this above solution is O(n^2)
//
//
//int main(){
//    
//    string s = "aaaa"; //2
//    s = "abcdef"; //-1
//    s = "abcaba"; //1
//    
//    s = "accccca"; //3
//    
//    s = "aaaaaaaaaaaaccccccccccccccccccccccccccaaaaaaaaaaaa";//24
//    
//    s = "acc";//-1
//    
//    
//    cout<<maximumLength(s)<<endl;
//
//
//    
//    return 0;
//}
