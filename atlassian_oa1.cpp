#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n = 7, ans = 0;
    vector<int> A = {0,1,2,4,5}, B={1,2,3,5,6};
    vector<unordered_map<int, int>> adj(n);
    for(int i=0; i<A.size(); i++){
        adj[A[i]].insert({B[i], 1});
        adj[B[i]].insert({A[i], 1});
    }

    while(1){
        vector<int> els;
        for(int i=0; i<n; i++){
            if(adj[i].size()<=1){
                bool flag = false;
                for(auto it2: adj[i]){
                    if(it2.second==0) flag = true;
                }
                if(!flag) els.push_back(i);
            }
        }

        // no elements left with atmost 1 edge.
        if(els.size()==0) break;
        for(auto it: els){
            if(adj[it].size()==0){
                adj[it].insert({-1, 0});
            }
            else{
                int adjEl;
                for(auto it2: adj[it]){
                    adjEl = it2.first;
                }
                adj[it].clear();
                adj[it].insert({-1, 0});
                adj[adjEl].erase(it);
            }
        }
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}