////
////  lc1455_potd_2_dec_24.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 30/12/24.
////
//
//#include "bits/stdc++.h"
//
//using namespace std;
//
//int isPrefixOfWord(string sentence, string searchWord) {
//    
//    int ans = 1;
//
//    for(int i = 0;i<sentence.size();i++){
//
//        if(i==0 && sentence[i] == searchWord[i]){
//            int j=0;
//            while(i<sentence.size() && sentence[i] == searchWord[j]){
//                j++;
//                i++;
//            }
//            if(j == searchWord.size())return ans;
//            // ans++;
//            i--;
//            // cout<<sentence[i+1];
//        }else if(sentence[i] == ' '){
//            ans++;
//            i++;
//            int j=0;
//            while(i<sentence.size() && sentence[i] == searchWord[j]){
//                j++;
//                i++;
//            }
//            if(j == searchWord.size())return ans;
//        }
//    }
//
//    return -1;
//
//}
//
//int main(){
//    
//    string sentence = "b bu bur burg burger";
//    
//    string searchWord = "burg";
//    
//    cout<<isPrefixOfWord(sentence, searchWord)<<endl;
//    
//    return 0;
//}
