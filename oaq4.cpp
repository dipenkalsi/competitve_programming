#include<bits/stdc++.h>
using namespace std;
int dfs(int src, vector<vector<pair<int, int>>>& adj, vector<int>& v, vector<int>& val){
    long ans = 0;
    for(int i=0; i<v.size(); i++){
        if(v[i]<=val[src]){
            ans++;
        }
    }
    for(auto it: adj[src]){
        int edgeWt = it.second;
        int child = it.first;
        vector<int> temp = v;
        for(auto it: temp) it+=edgeWt;
        temp.push_back(edgeWt);
        ans+=dfs(child, adj, temp, val);
    }
    return ans;
}
int main(){
    int n=6;
    vector<int> from = {1, 6, 6, 1, 2}, to = {6, 5, 2, 4, 3}, weight = {4, 1, 3, 3, 1}, val = {2, 2, 8, 3, 5, 4};
    long ans=0;
    //given a directed weighted tree, find out the no. of pairs of vertices u and v such that u is an ancestor of v and dist(u, v) <= val[v].

    //1. Create the adjacency list.
    vector<vector<pair<int, int>>> adj(n+1);
    for(int i=0; i<from.size(); i++){
        adj[from[i]].push_back({to[i], weight[i]});
    }

    //vector to store the weights of the paths from the nodes lying in the path.
    vector<int> v;
    //call dfs
    cout<<dfs(1, adj, v, val);
    return 0;
}