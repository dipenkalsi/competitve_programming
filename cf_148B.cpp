#include<bits/stdc++.h>
using namespace std;
void f(int k, vector<long long>& v, long long ans){
    if(k==0) {
        long long sum = 0;
        for(int i=0; i<v.size(); i++) sum+=v[i];
        ans = max(sum, ans);
    }
    vector<long long> temp = v;
    temp.erase(temp.begin());
    temp.erase(temp.begin());
    f(k-1, temp, ans);
    temp = v;
    temp.pop_back();
    f(k-1, temp, ans);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        long long ans = 0;
        vector<long long> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        sort(v.begin(), v.end());
        f(k, v, ans);
        cout<<ans<<endl;
    }
    return 0;
}