#include <bits/stdc++.h>
using namespace std;

int main(){
    //ADJACENCY MATRIX
    //n -> # of nodes, m -> # of edges
    int n, m;
    cin>>n>>m;
    //size nxn bc that's the maximum possible number of edges possible for n nodes
    vector<vector<bool>> adjMx(n, vector<bool>(n, false));
    while(m--){
        int a, b;
        cin>>a>>b;
        //decrement because zero index or increase the size of vector by one x one
        a--; b--;
        adjMx[a][b] = 1;
        adjMx[b][a] = 1; //bc undirected
    }
    //ADJACENCY LIST
    //Better memory efficiency than adjacency matrix
    int nn, mm;
    cin>>nn>>mm;
    vector<vector<int>> adj(nn);
    while(mm--){
        int a, b;
        cin>>a>>b;
        //decrement because zero index or increase the size of vector by one x one
        a--; b--;
        adj[a].push_back(b);
        adj[b].push_back(a); //bc undirected
    }
    //Edge List
    //mmm is the number of edges
    int nnn, mmm;
    cin>>nnn>>mmm;
    vector<pair<int,int>> edges(mmm);
    while(mmm--){
        int a, b;
        cin>>a>>b;
        edges.push_back({a,b});
        edges.push_back({b,a});
    }
    return 0;
}
