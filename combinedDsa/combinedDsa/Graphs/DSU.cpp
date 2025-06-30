//
//  DSU.cpp
//  combinedDsa
//
//  Created by Tejash Singh on 24/06/25.
//

#include "bits/stdc++.h"

using namespace std;

class DisjointSetSize{
    
    vector<int>parent,size;
public:
    DisjointSetSize(int n){
        //can work with 0 based index and 1 based index both
        size.resize(n+1,1);
        parent.resize(n+1);
        for(int i = 0; i<=n ; i++){
            parent[i] = i;
        }
    }
    
    //u->ultimate
    int findUPar(int node){
        if(parent[node] == node){
            return node;
        }
        return parent[node] = findUPar(parent[node]);
    }

    
    void unionBySize(int node1,int node2){
        int ulP1 = findUPar(node1);
        int ulP2 = findUPar(node2);
        
        if(ulP1 == ulP2)return;
        
        if(size[ulP1] > size[ulP2]){
            parent[ulP2] = ulP1;
            size[ulP1] += size[ulP2];
        }else if(size[ulP1] < size[ulP2]){
            parent[ulP1] = ulP2;
            size[ulP2] += size[ulP1];
        }else{
            parent[ulP2] = ulP1;
            size[ulP1] += size[ulP2];
        }
    }
    
};

class DisjointSetRank{
    
    vector<int>rank,parent;
public:
    DisjointSetRank(int n){
        rank.resize(n+1,0);
        parent.resize(n+1);
        for(int i = 0; i<=n ; i++){
            parent[i] = i;
        }
    }
    
    //u->ultimate
    int findUPar(int node){
        if(parent[node] == node){
            return node;
        }
        return parent[node] = findUPar(parent[node]);
    }
    
    void unionByRank(int node1,int node2){
        
        int ulP1 = findUPar(node1);
        int ulP2 = findUPar(node2);
        
        int r1 = rank[ulP1];
        int r2 = rank[ulP2];
        
        //join smaller into larger
        
        if(r1 > r2){
            parent[ulP2] = ulP1;
        }else if(r1<r2){
            parent[ulP1] = ulP2;
        }else{
            parent[ulP2] = ulP1;
            rank[ulP1]++;
        }
    }
};

int main(){
    
    DisjointSetSize ds(7);
    ds.unionBySize(1,2);
    ds.unionBySize(2,3);
    ds.unionBySize(4,5);
    ds.unionBySize(6,7);
    ds.unionBySize(5,6);
    
    if(ds.findUPar(3) == ds.findUPar(7)){
        cout<<"Same Parent"<<endl;
    }else cout<<"not same Parent"<<endl;
    
    ds.unionBySize(3,7);
    
    if(ds.findUPar(3) == ds.findUPar(7)){
        cout<<"Same Parent"<<endl;
    }else cout<<"not same Parent"<<endl;
    
    
    return 0;
}
