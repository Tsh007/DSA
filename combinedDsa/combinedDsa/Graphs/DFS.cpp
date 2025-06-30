////
////  DFS.cpp
////  combinedDsa
////
////  Created by Tejash Singh on 21/12/24.
////
//
//
//#include "bits/stdc++.h"
//
//using namespace std;
//
////this is good //above is perfect dfs with adjcency matrix
////vector<int> dfsOfGraph(vector<vector<int>>& adj) {
////        // Code here
////        
////        vector<vector<int>>adjMat(adj.size(),vector<int>(adj.size(),0));
////        
////        for(int i=0;i<adj.size();i++){
////            for(int k = 0 ;k<adj[i].size();k++){
////                adjMat[i][adj[i][k]]=1;
////            }
////        }
////    
//////    for(auto i : adjMat){
//////        for(auto k : i){
//////            cout<<k<<" ";
//////        }
//////        cout<<endl;
//////    }
//////    cout<<endl;
////        
////        vector<int>ans;
////        vector<int>vis(adjMat.size(),0);
////        
////        stack<int> s;
////        
////        s.push(0);
////        
////        while(!s.empty()){
////            int top = s.top();
////            s.pop();
////            for(int i = 0 ;i<adjMat.size();i++){
////                if(adjMat[top][i] == 1 && vis[i] == 0)s.push(i);
//////                cout<<i<<" ";
////            }
////            ans.push_back(top);
////            vis[top] = 1;
//////            cout<<top<<" ";
////            
////        }
////        
////        return ans;
////}
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////dfs with adjcency list down
//
////vector<int> dfsOfGraph(vector<vector<int>>& adj) {
////        // Code here
////        
//////        vector<vector<int>>adjMat(adj.size(),vector<int>(adj.size(),0));
//////        
//////        for(int i=0;i<adj.size();i++){
//////            for(int k = 0 ;k<adj[i].size();k++){
//////                adjMat[i][adj[i][k]]=1;
//////            }
//////        }
////    
//////    for(auto i : adjMat){
//////        for(auto k : i){
//////            cout<<k<<" ";
//////        }
//////        cout<<endl;
//////    }
//////    cout<<endl;
////        
////        vector<int>ans;
////        vector<int>vis(adj.size(),0);
////        
////        stack<int> s;
////        
////        s.push(0);
////        
////        while(!s.empty()){
////            int top = s.top();
////            s.pop();
////            for(int i = adj[top].size()-1 ;i>=0;i--){
////                if(vis[adj[top][i]] == 0)s.push(adj[top][i]);
//////                cout<<i<<" ";
////            }
////            if(vis[top]==0)ans.push_back(top);
////            vis[top] = 1;
//////            cout<<top<<" ";
////            
////        }
////        
////        return ans;
////}
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////recursive dfs
//
////void recursiveDfs(vector<vector<int>> &adj,vector<int>&ans,vector<int>&vis,int i){
////     
////    if(i>=adj.size())return;
////    
//////    if(j>=adj[i].size())return;
////    
////    ans.push_back(i);
////    vis[i] = 1;
////    
////    for(int k = 0 ;k<adj[i].size();k++){
////        if(vis[adj[i][k]] == 0)recursiveDfs(adj,ans,vis,adj[i][k]);
////    }
////    
////    return;
////    
////}
////
////vector<int> dfsOfGraph(vector<vector<int>>& adj){
////    
////    vector<int>ans;
////    
////    vector<int>vis(adj.size(),0);
////    
////    recursiveDfs(adj,ans,vis,0);
////    
////    return ans;
////}
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////recursive dfs using adjcency matrix
//
//void recursiveDfs(vector<vector<int>> &adjMat,vector<int>&ans,vector<int>&vis,int i){
//
//    if(i>=adjMat.size())return;
//    
//    ans.push_back(i);
//    vis[i] = 1;
//    
//    for(int k = 0 ;k<adjMat.size();k++){
//        if(vis[k] == 0 && adjMat[i][k] == 1)recursiveDfs(adjMat, ans, vis, k);
//    }
//    
//}
//
//vector<int> dfsOfGraph(vector<vector<int>>& adj){
//    
//    vector<int>ans;
//    vector<int>vis(adj.size(),0);
//    vector<vector<int>>adjMat(adj.size(),vector<int>(adj.size(),0));
//    
//    for(int i=0;i<adj.size();i++){
//        for(int k = 0 ;k<adj[i].size();k++){
//            adjMat[i][adj[i][k]]=1;
//        }
//    }
//    
////    for(auto i : adjMat){
////        for(auto k : i){
////            cout<<k<<" ";
////        }
////        cout<<endl;
////    }
//    
//    recursiveDfs(adjMat,ans,vis,0);
//    
//    return ans;
//    
//}
//
//
//
//int main(){
//    
//    vector<vector<int>>adj = {{2,3,1},{0},{0,4},{0},{2}};
//    
//    
//    vector<int>dfsAns = dfsOfGraph(adj);
//    
//    for(auto i : dfsAns){
//        cout<<i<<" ";
//    }
//    
//    cout<<endl;
//    return 0;
//}
