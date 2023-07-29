#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    set<int, greater<int>> s;
    for(int i=0; i<n; i++){
        cin>>v[i];
        s.insert(v[i]);
    } 
    map<int, int> mpp;
    for(auto it: v) mpp[it]++;
    int ans = 0;
    int count = 1;
    for(auto it: s){
        ans+=(s.size()-count) * mpp[it];
        count++;
    }
    cout<<ans<<endl;
    return 0;
}