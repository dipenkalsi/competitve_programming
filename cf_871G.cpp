#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, e, x = INT_MIN, y = INT_MIN;
        cin>>n>>e;
        map<int, vector<int>> adj;
        for(int i=0; i<e; i++){
            int a, b;
            cin>>a>>b;
            adj[a].emplace_back(b);
            adj[b].emplace_back(a);
        }
        bool flag1 = false, flag2 = false;
        for(auto it: adj){
            if(flag1 && flag2) break;
            if(y!=INT_MIN){
                if(it.second.size() != 1 && it.second.size() != y+1 ){
                x = it.second.size();
                flag2 = true;
                }
            }
            for(auto it2: it.second){
                if(adj[it2].size()==1){
                    bool flag1 = true;
                    if(y>INT_MIN) break;
                    y = it.second.size()-1;
                    if(y!=temp-1 && y!=1) x= temp;
                }
            }
        }
        if()
        cout<<x<<" "<<y<<endl;
    }
    return 0;
}