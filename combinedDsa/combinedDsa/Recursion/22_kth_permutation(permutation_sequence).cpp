////
////  22_kth_permutation(permutation_sequence).cpp
////  combinedDsa
////
////  Created by Tejash Singh on 11/10/24.
////
//
//#include <stdio.h>
//#include "bits/stdc++.h"
//
//
//using namespace std;
//
//
//////void customFunc(vector<int>hash,int &count,int k,string s,string ans,vector<string>&finalAns){
//////    
//////    if(k==hash.size()){
//////        count--;
//////        if(count == 0) finalAns.push_back(ans);
//////        
//////        return;
//////    }
//////    
//////    for(int i = 0;i<hash.size();i++){
//////        
//////        if(!hash[i]){
//////            
//////            ans += s[i];
//////            hash[i] = 1;
//////            
//////            customFunc(hash, count, k+1, s, ans,finalAns);
//////            
//////            hash[i] = 0;
//////            ans.pop_back();
//////        }
//////    }
//////    
//////}
////
////
//////tle on above sol
////
//////void customFunc(int i,string s,vector<string>&ans,int &count){
//////    
//////    if(i>=s.length()){
//////        ans.push_back(s);
//////        return;
//////    }
//////    
//////    for(int k = i;k<s.length();k++){
//////        
//////        swap(s[k],s[i]);
//////        customFunc(i+1, s, ans,count);
//////        swap(s[k],s[i]);
//////    }
//////}
////
////string getPermutation(int n, int k) {
////    
//////    vector<int>hash(n,0);
//////    
//////    string s = "";
//////    
//////    for(int i=0;i<n;i++){
//////        s+= char(i+49);
//////    }
//////    
//////    string ans;
//////    
//////    vector<string>finalAns;
//////    
//////    int count = k;
//////    
//////    customFunc(hash, count, 0, s,ans,finalAns);
//////    
//////    if(!finalAns.empty())return finalAns[0];
//////    return ans;
////    
////    
////    
////    //above gives tle
//////    vector<string>ans;
//////    string s = "";
//////    
//////        for(int i=0;i<n;i++){
//////            s+= char(i+49);
//////        }
//////    
//////    
//////    customFunc(0, s, ans,k);
//////    
////////    if(!ans.empty())return ans[0];
//////    sort(ans.begin(),ans.end());
//////    
//////    
//////    return ans[k-1];
////
////    
////}
//
//
////above solution gives TLE on submission as they take atleast n! time to calculate the kth permutation
//
////optimal solution
//
//string getPermutation(int n, int k) {
//    
//    int fact = 1;
//    
//    string s = "";
//    string ans = "";
//    
//    int curr;
//
//    for(int i = 0;i<n;i++){
//        s+=char(i+49);
//        if(i>1)fact = fact * i;
//        curr = i;
//    }
//    k--;
//    
//    while(fact != 0){
//        ans += s[k/fact];
//        
//        s.erase(s.begin()+k/fact);
//        
//        k = k%fact;
//        
//        if(curr == 0)break;
//            fact = fact / curr;
//        
//        curr--;
//    }
//    
//    return ans;
//}
//
//
//int main(){
//        
//    int n = 3;
//    int k = 3;
//
////    n=4;k=17;
//    
//    cout<<getPermutation(n,k)<<endl;
//    
//    return 0;
//}
