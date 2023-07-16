#include<bits/stdc++.h>
using namespace std;
bool isMatching(pair<int, int>& a, pair<int, int>& b){
    if(a.second <= b.first) return true;
    return false;
}
bool cmp(pair<int, int>& a, pair<int,int>&b){
    return a.first < b.first;
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
        for(int i=0; i<n; i++){
            if(isMatching(v[i], v[i+1])){
                for(int j=0; j<n; j++){
                    if(j!=i){
                        if (isMatching(v[j], v[i+1])) ans++;
                        break;
                    }
                }
            }
            else ans++;
        }
    }
    return 0;
}