#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, k, d, w;
    cin>>n>>k>>d>>w;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int ans = 1;
    int lastOpened = v[0];
    int dosesLeft = k;
    for(int i=0; i<n; i++){
        if(dosesLeft>0 && v[i]<=w+d+lastOpened) dosesLeft--;
        else{
            ans++;
            dosesLeft = k-1;
            lastOpened = v[i];
        }
    }
    cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
