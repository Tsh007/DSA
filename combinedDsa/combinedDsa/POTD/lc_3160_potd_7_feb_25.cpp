////
////  lc_3160_potd_7_feb_25.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 07/02/25.
////
//
//#include "bits/stdc++.h"
//
//using namespace std;
//
//vector<int> queryResults(int limit, vector<vector<int>>& queries) {
//        
//        unordered_map<int,int>colors;
//
//        unordered_map<int,int>balls;
//
//        vector<int>ans;
//
//        for(int i = 0;i<queries.size();i++){
//            int currColor = queries[i][1];
//            int currBall = queries[i][0];
//
//            if(balls[currBall] == 0 && colors[currColor] == 0){
//                //both new
//                balls[currBall] = currColor;
//                colors[currColor]++;
//            }else if(balls[currBall] == 0 && colors[currColor] != 0){
//                //new ball old color
//                colors[currColor]++;
//                balls[currBall] = currColor;
//            }else if(balls[currBall] != 0 && colors[currColor] == 0){
//                //old ball new color
//                int prevColor = balls[currBall];
//                colors[prevColor]--;
//                if(colors[prevColor] == 0)colors.erase(prevColor);
//                balls[currBall] = currColor;
//                colors[currColor]++;
//
//                if(i == 2){
//                    for(auto k : colors){
//                        cout<<k.first<<" "<<k.second<<endl;
//                    }
//                }
//            }else if(balls[currBall] != 0 && colors[currColor] != 0){
//                //old ball old color
//
//            }
//
//            ans.push_back(colors.size());
//        }
//
//        return ans;
//    }
//
//int main(){
//    
//    int limit = 1;
//    vector<vector<int>>queries = {{0,2},{1,10},{0,10},{0,3},{1,5}};
//    
//    vector<int>ans = queryResults(limit, queries);
//    
//    for(auto i : ans){
//        cout<<i<<" ";
//    }
//    
//    cout<<endl;
//    
//    return 0;
//}
