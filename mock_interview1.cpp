// n people 100 caps
#include<bits/stdc++.h>
using namespace std;
int f(int ind, map<int, int>& ds, vector<vector<int>>& v, map<pair<int, map<int, int>>, int>& dp){
    if(ind==v.size()) return 1;
    if(dp[{ind, ds}]) return dp[{ind, ds}];
    int res = 0;
    for(int j=0; j<v[ind].size(); j++){
        if(!ds[v[ind][j]]){
            ds[v[ind][j]] = 1;
            res += f(ind+1, ds, v, dp);
            ds[v[ind][j]] = 0;
        }
    }
    return dp[{ind, ds}] = res;
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>> v(n);
    for(int i=0; i<n; i++){
        int k;
        cin>>k;
        for(int j=0; j<k; j++){
            int num;
            cin>>num;
            v[i].push_back(num);
        }
    }
    map<int, int> ds;
    map<pair<int, map<int, int>>, int> dp;
    int ans = f(0, ds, v, dp);
    cout<<"The answer is: "<<ans<<endl;
    return 0;
}