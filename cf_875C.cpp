#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int,int>> v(n-1);
        for(int i=0; i<n-1; i++){
            cin>>v[i].first;
            cin>>v[i].second;
        }
        int vis = 1;
        map<int, int> mpp;
        mpp[1] = 1;
        int ans = 0;
        while(vis!=n){
            for(int i = 0; i < v.size(); i++){
                if(mpp[v[i].first]){
                    if(!mpp[v[i].second]){
                        mpp[v[i].second] = 1;
                        vis++;
                    }
                }
                else if(mpp[v[i].second]){
                    if(!mpp[v[i].first]){
                        mpp[v[i].first] = 1;
                        vis++;
                    }
                }
            }
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}



