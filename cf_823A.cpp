#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, c;
        cin>>n>>c;
        vector<int> v(n);
        map<int, int> mpp;
        for(int i=0; i<n; i++){
            cin>>v[i];
            if(!mpp[v[i]]) mpp[v[i]] = 1;
            else mpp[v[i]]++;
        }
        int ans = 0;
        for(auto it:mpp){
            if(it.second!=1){
                ans+=min(it.second, c);
            }
            else ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}