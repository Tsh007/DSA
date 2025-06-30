////
////  lc1014_potd_27_dec_24.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 27/12/24.
////
//
//#include "bits/stdc++.h"
//
//using namespace std;
//
//int maxScoreSightseeingPair(vector<int>& values) {
//    // int maxValue = INT_MIN;
//
//    // for(int i = 0;i<values.size()-1;i++){
//    //     for(int j = i+1;j<values.size();j++){
//    //         if(values[i]+values[j]+i-j > maxValue)maxValue = values[i]+values[j]+i-j;
//    //     }
//    // }
//
//    // return maxValue;
//    
//    //above gives tle
//    
//    
//    
//    
//    vector<int>maxPrev(values.size(),0);
//    
//    int maxPrevVal = values[0];
//    
//    maxPrev[0] = values[0];
//    
//    int maxScore = INT_MIN;
//    
//    for(int i = 1;i<values.size();i++){
//        
//        if(maxPrev[i-1] + values[i] - i > maxScore)maxScore = maxPrev[i-1] + values[i] - i;
//        
//        
//        if(values[i]+i > maxPrev[i-1])maxPrev[i] = values[i]+i;
//        else maxPrev[i] = maxPrev[i-1];
//    }
//    
//    return maxScore;
//}
//
//int main(){
//    
//    vector<int>values = {8,1,5,2,6};//11
//    
////    values = {1,2};//2
//    
//    cout<<maxScoreSightseeingPair(values)<<endl;
//    
//    return 0;
//}
