#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<double> x(n), t(n);
    for(int i=0; i<n; i++) cin>>x[i];
    for(int i=0; i<n; i++) cin>>t[i];
    double maxi = -2e8, mini = 2e8;
    for(int i=0; i<n; i++){
        maxi = max(maxi, x[i]+t[i]);
        mini = min(mini, x[i]-t[i]);
    }
    cout<<setprecision(10)<<(maxi+mini)/2.0<<endl;
}
int main(){
    double x = 5;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}