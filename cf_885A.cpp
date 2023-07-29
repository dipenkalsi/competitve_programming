#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m, k;
        cin>>n>>m>>k;
        int x, y;
        cin>>x>>y;
        vector<pair<int, int>> v;
        if(x-1>0){
            v.push_back({x-1, y});
        }
        if(y-1>0){
            v.push_back({x, y-1});
        }
        if(x+1<=n){
            v.push_back({x+1, y});
        }
        if(y+1<=m){
            v.push_back({x, y+1});
        }
        for(int i=0; i<k; i++){
            int a, b;
            cin>>a>>b;
            pair<int, int> p = {a+1, b};
            if(find(v.begin(), v.end(), p)!=v.end()) v.erase(find(v.begin(), v.end(), p));
            p = {a-1, b};
            if(find(v.begin(), v.end(), p)!=v.end()) v.erase(find(v.begin(), v.end(), p));
            p = {a, b+1};
            if(find(v.begin(), v.end(), p)!=v.end()) v.erase(find(v.begin(), v.end(), p));
            p = {a, b-1};
            if(find(v.begin(), v.end(), p)!=v.end()) v.erase(find(v.begin(), v.end(), p));
            if(v.size()==0) break;
        }
        if(v.size()!=0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}