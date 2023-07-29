#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll mod = 1e9+7;
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];
    vector<ll> pre(n);
    for(ll i=0; i<n; i++){
        if(i==0) pre[i] = v[i];
        else{
            pre[i] = v[i] + pre[i-1];
        }
    }
    ll ans = 0;
    for(ll i=0; i<n; i++){
        ll mini = v[i];
        for(ll j=i; j<n; j++){
            mini = min(mini, v[j]);
            if(i==0){
                ans += mini * (pre[j]);
            }
            else{
                ans += mini * (pre[j] - pre[i-1]);
            }
        }
    }
    cout<<ans%mod<<endl;
    return 0;
}