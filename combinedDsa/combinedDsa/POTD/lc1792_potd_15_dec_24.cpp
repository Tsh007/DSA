////
////  lc1792_potd_15_dec_24.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 15/12/24.
////
//
//
//#include "bits/stdc++.h"
//#define PII pair<int,int>
//
//using namespace std;
//
//class Compare{
//    public:
//    bool operator()(PII below,PII above){
//        
////        double b = double(below.second - below.first)/double(below.second*(below.second+1));
//        
//        double b = (double(below.first+1)/double(below.second+1))  - (double(below.first)/double(below.second));
//        
////        double a = double(above.second - above.first)/double(above.second*(above.second+1));
//        
//        double a = (double(above.first+1)/double(above.second+1))  - (double(above.first)/double(above.second));
//        
//        if(b<a){
//            return true;
//        }
//        return false;
//    }
//};
//
//double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
//    
//    double ans = 0;
//    priority_queue<PII,vector<PII>,Compare> customHeap;
//    
//    for(int i = 0 ; i<classes.size() ; i++){
//        ans += (double(classes[i][0])/double(classes[i][1]));
//        
//        customHeap.push({classes[i][0],classes[i][1]});
//    }
//    
////    customHeap.push({2,3});
////    while(!customHeap.empty()){
////        cout<<customHeap.top().first<<" "<<customHeap.top().second<<endl;
////        customHeap.pop();
////    }
//    
////    cout<<ans<<endl;
//    
//    while(extraStudents>0){
//        
//        double passed = customHeap.top().first;
//        double total = customHeap.top().second;
//        
//        ans -= (passed/total);
//        
//        ans += ((passed+1)/(total+1));
//        
////        cout<<passed<<" "<<total<<endl;
////        cout<<ans<<endl;
//        customHeap.pop();
//        
//        customHeap.push({passed+1,total+1});
//        
//        extraStudents--;
//        
//    }
//    
////    cout<<endl;
////    return ans;
//    return ans/classes.size();
//}
//
//int main(){
//    
//    vector<vector<int>>classes = {{1,2},{3,5},{2,2}};//
//    int extraStudents = 2;
//    
//    classes = {{2,4},{3,9},{4,5},{2,10}};
//    extraStudents = 4;
//    
//    
//    cout<<maxAverageRatio(classes, extraStudents)<<endl;
//    
//    
//    return 0;
//}
//
