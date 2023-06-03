#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans = 1;
        vector<int> vis(n+1, -1);
        vis[1] = 0;
        vector<vector<int>> cons(n+1);
        for(int i=0; i<n-1; i++){
            int a, b;
            cin>>a>>b;
            a = min(a, b);
            b = max(a, b);
            if(vis[a]>-1){
                vis[b] = vis[a];
                ans = max(ans, vis[b]);
                for(auto it: cons[b]){
                    if(vis[it]==-1){
                        vis[it] = vis[b]+1;
                        ans = max(ans, vis[it]);
                    }
                }
            }
            else if(vis[b]>-1){
                vis[a] = vis[b];
                ans = max(ans, vis[a]);
                for(auto it: cons[a]){
                    if(vis[it]==-1){
                        vis[it] = vis[a]+1;
                        ans = max(ans, vis[it]);
                        
                    }
                }
            }
            else{
                cons[a].push_back(b);
                cons[b].push_back(a);
            }
        }
        cout<<ans+1<<endl;
    }
    return 0;
}