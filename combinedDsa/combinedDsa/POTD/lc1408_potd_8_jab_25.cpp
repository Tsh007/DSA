////
////  lc1408_potd_8_jab_25.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 08/01/25.
////
//
//#include "bits/stdc++.h"
//
//
//using namespace std;
//
//bool checkSub(string i,string k){
//    
//    int low = 0;
//    
//    int p = 0;
//    
//    while(p<i.size() && low<k.size()){
//        
//        if(i[p] == k[low]){
//            int x = p;
//            int y = low;
//            while(x<i.size() && y<k.size() && i[x] == k[y]){
//                x++;
//                y++;
//            }
//            if(x == i.size())return 1;
//        }
//        low++;
//    }
//    
//    return 0;
//}
//
//vector<string> stringMatching(vector<string>& words) {
//    
//    
//    vector<string>ans;
//    
//    for(int i = 0; i<words.size() ;i++){
//        for(int k = 0 ; k<words.size() ;k++){
//            if(i!=k){
//                if(checkSub(words[i],words[k])){
//                    
//                    if(ans.empty())ans.push_back(words[i]);
//                    else if(ans.back() != words[i])ans.push_back(words[i]);
//                }
//            }
//        }
//    }
//
//    
//    return ans;
//}
//
//int main(){
//    
//    vector<string> words = {"mass","as","hero","superhero"};
//    
//    words = {"leetcode","et","code"};
//    
////    words = {"blue","green","bu"};
//    
//    vector<string>ans = stringMatching(words);
//    
//    for(auto i : ans){
//        cout<<i<<" ";
//    }
//    
//    cout<<endl;
//    
//    return 0;
//}
