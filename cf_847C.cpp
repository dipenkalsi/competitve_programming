#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++) cin>>v[i];
        sort(v.begin(), v.end());
        map<int, int> mpp;
        for(int i=0; i<n; i++){
            if(mpp[v[i]-1]){
                mpp[v[i]-1]--;
                if(mpp[v[i]-1] == 0) mpp.erase(v[i]-1);
                if(!mpp[v[i]]) mpp[v[i]] = 1;
                else mpp[v[i]]++;
            }
            else{
                if(!mpp[v[i]]) mpp[v[i]] = 1;
                else mpp[v[i]]++;
            }
        }
        int ans = 0;
        for(auto it: mpp){
            if(it.second >0) ans+=it.second;
        }
        cout<<ans<<endl;
    }
    return 0;
}