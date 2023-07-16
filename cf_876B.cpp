#include<bits/stdc++.h>
using namespace std;
static bool cmp(pair<int, int>& a, pair<int, int>& b){
    if(a.first == b.first) return a.second > b.second;
    else return a.first < b.first;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int, int>> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i].first;
            cin>>v[i].second;
        }
        int ans = 0;
        sort(v.begin(), v.end(), cmp);
        for(auto it: v){
            cout<< "ai = "<<it.first;
            cout<< " bi = "<<it.second<<endl;
        }
        bool counted = false;
        int turnedOn = 0;
        vector<pair<int, int>> lamps;
        for(int i=0; i<n; i++){
            if(v[i].first==1 && !counted){
                counted = true;
                ans+=v[i].second;
                continue;
            }
            if(v[i].first==1) continue;
            if(v[i].first==turnedOn) continue;
            turnedOn++;
            ans+= v[i].second;
            // if(lamps.size()==0){
            //     lamps.push_back({v[i].first, 1});
            //     continue;
            // }
            // if(lamps[lamps.size()-1].first==v[i].first){
            //     lamps[lamps.size()-1].second++;
            // }
            // else lamps.push_back({v[i].first, 1});
            // if(lamps[0].first<=turnedOn){
            //     turnedOn-=lamps[0].second;
            //     lamps.erase(lamps.begin());
            // }
            for(int i=0; i<v.size())
        }
        cout<<ans<<endl;
    }
    return 0;
}