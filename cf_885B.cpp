#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        map<int, vector<int>> mpp, jumps;
        for(int i=0; i<n; i++){
            int a;
            cin>>a;
            if(mpp[a].size()==0) mpp[a].push_back(0);
            mpp[a].push_back(i);
        }
        int ans = 0;
        for(auto it: mpp){
            it.second.push_back(n);
            cout<<"mpp "<<it.first<<": ";
            for(int i=0; i<it.second.size(); i++){
                cout<<it.second[i]<<" ";
            }
            cout<<endl;
            vector<int> v = it.second;
            for(int i=1; i<v.size(); i++){
                if(v[i]==v[i-1]) continue;
                jumps[it.first].push_back(v[i] - v[i-1]-1);
            }
            sort(jumps[it.first].begin(), jumps[it.first].end());
        }
        for(auto it: jumps){
            cout<<"jumps "<<it.first<<": ";
            for(int i=0; i<it.second.size(); i++){
                cout<<it.second[i]<<" ";
            }
            cout<<endl;
            int sum = 0;
            for(int i=0; i<it.second.size(); i++){
                if(i==it.second.size()-1) sum = max(sum, it.second[i]/2);
                else sum = max(sum, it.second[i]);
            }
            ans = min(ans, sum);
        }
        cout<<ans<<endl;
    }
    return 0;
}