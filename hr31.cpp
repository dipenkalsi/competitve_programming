#include<bits/stdc++.h>
using namespace std;
static bool cmp(vector<int>& a, vector<int>& b){
    return a[2]>=b[2];
}
int dfs(int node, map<int, vector<pair<int, int>>>& adj, map<pair<int, int>, int>& mpp, int k){
    int res = 0;
    map<pair<int, int>, int> tempMpp = mpp;
    for(auto it: adj[node]){
        int u = node, v = it.first;
        if(mpp[{v, u}]<k && mpp[{u, v}]<k){
            int temp = 0;
            if(!mpp[{u, v}] && !mpp[{v, u}]){
                mpp[{u, v}] = 1;
                temp += it.second;
            } 
            else mpp[{u, v}]++;
            res = max(res, temp + dfs(it.first, adj, mpp, k));
            mpp = tempMpp;
        }
    }
    return res;
}
int main(){
    int n, k;
    cin>>n>>k;
    map<int, vector<pair<int, int>>> adj;
    for(int i=0; i<n-1; i++){
        int u, v, c;
        cin>>u>>v>>c;
        adj[u].push_back({v, c});
        adj[v].push_back({u, c});
        vector<int> temp{u, v, c};
    }
    map<pair<int, int>, int> mpp;
    int ans = 0;
    for(int i=0; i<n; i++){
        ans = max(ans, dfs(i, adj, mpp, k));
    }
    cout<<ans<<endl;
    return 0;
}