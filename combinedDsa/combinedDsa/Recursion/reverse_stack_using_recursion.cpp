////
////  reverse_stack_using_recursion.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 09/09/24.
////
//
//#include <stdio.h>
//
//#include "bits/stdc++.h"
//
//using namespace std;
//
//void insertAtEnd(stack<int>&s,int element){
//    
//    if(s.empty()){
//        s.push(element);
//        return;
//    }
//    
//    int top = s.top();
//    s.pop();
//    insertAtEnd(s,element);
//    
//    s.push(top);
//    return;
//}
//
//void reverse(stack<int>&s,int n,int size){
//    if(n==size)
//        return;
//    
//    int top = s.top();
//    
//    
//    s.pop();
//    reverse(s,n+1,size);
//    
//    insertAtEnd(s, top);
//    
//   
//    
//}
//
//int main(){
//    
//        stack<int> s ;
//    
//        s.push(41);
//        s.push(3);
//        s.push(32);
//        s.push(2);
//        s.push(11);
////    insertAtEnd(s, 99);
//    
//    reverse(s,0,s.size());
//    
//    while(!s.empty()){
//        cout<<s.top()<<" ";
//        s.pop();
//    }
//    cout<<endl;
////    s.push(41);
////    s.push(3);
////    s.push(32);
////    s.push(2);
////    s.push(11);
////    
////        reverse(s,0);
////        insertAtEnd(s, 5);
//    
//    
////        for(int i=0;i<s.size();i++){
////            sort(s);
////        }
//    
//        while(!s.empty()){
//            cout<<s.top()<<" ";
//            s.pop();
//        }
//    cout<<endl;
//    
//    
//    
//    return 0;
//}
