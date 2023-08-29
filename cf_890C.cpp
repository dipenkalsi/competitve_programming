#include<bits/stdc++.h>
using namespace std;
bool isDesc(vector<int>& v){
    for(int i=0; i<v.size()-1; i++){
        if(v[i]<=v[i+1]) return false;
    }
    return true;
}
int f(vector<int>& v, int k, map<vector<int>, int>& dp){
    if(dp[v]) return dp[v];
    if(k==0 || isDesc(v)) return *max_element(v.begin(), v.end());
    int res = 0;
    for(int i=0; i<v.size()-1; i++){
        if(v[i]<=v[i+1]){
            v[i]++;
            res = max(res, f(v, k-1, dp));
            v[i]--;
        }
    }
    return dp[v] = res;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        map<vector<int>, int> dp;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        cout<<f(v, k, dp)<<endl;
    }
    return 0;
}