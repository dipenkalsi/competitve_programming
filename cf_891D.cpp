#include<bits/stdc++.h>
using namespace std;
bool dfs(int src, vector<vector<int>>& adj, vector<int>& vis, vector<int>& strong){
    vis[src] = 1;
    bool flag = true;
    for(int i=1; i<vis.size(); i++){
        if(!vis[i]){
            flag = false;
            break;
        }
    }
    if(flag) return true;
    for(auto it: adj[src]){
        if(strong[it]) return true;
        if(!vis[it]){
            if(dfs(it, adj, vis, strong)) return true;
        }
    }
    return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n), b(n);
        vector<vector<int>> adj(n+1);
        for(int i=0; i<n; i++) cin>>a[i];
        for(int i=0; i<n; i++){
            cin>>b[i];
        } 
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i!=j){
                    if(a[i]-a[j]>=b[i]-b[j]) adj[i+1].push_back(j+1);
                }
            }
        }
        vector<int> strong(n+1, 0);
        vector<int> vis(n+1, 0);
        int cnt = 0;
        vector<int> temp = vis;
        for(int i=1; i<=n; i++){
            if(dfs(i, adj, vis, strong)){
                cnt++;
                strong[i] = 1;
            } 
            vis = temp;
        }
        cout<<cnt<<endl;
        for(int i=1; i<=n; i++){
            if(strong[i]) cout<<i<<" ";
        } 
        cout<<endl;
    }
    return 0;
}