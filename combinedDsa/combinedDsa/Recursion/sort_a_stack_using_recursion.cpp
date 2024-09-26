////
////  sort_stack_using_recursion.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 07/09/24.
////
//
//
//#include <stdio.h>
//#include "bits/stdc++.h"
//
//using namespace std;
//
//void sort(stack<int>& s){
//    if(s.empty()) return;
//
//    int top = s.top();
//    s.pop();
//
//    sort(s);
//
//    if(!s.empty() && s.top()>top){
//        swap(top,s.top());
//    }
//
//    s.push(top);
//}
//
//int main(){
//
//    stack<int> s ;
//
//    s.push(41);
//    s.push(3);
//    s.push(32);
//    s.push(2);
//    s.push(11);
//
//
//    for(int i=0;i<s.size();i++){
//        sort(s);
//    }
//
//    while(!s.empty()){
//        cout<<s.top()<<" ";
//        s.pop();
//    }
//
//    cout<<endl;
//
//
//
//    return 0;
//}
