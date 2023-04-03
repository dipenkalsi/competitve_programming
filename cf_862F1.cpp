#include<bits/stdc++.h>
using namespace std;
vector<long long> solve(vector<long long>& v){
    int len = v.size();
    vector<long long> res;
    for(int i=0;i<v.size()-1;i++){
        for(int j = i+1;j<v.size();j++){
            long long el = v[i] + v[j];
            res.emplace_back(el);
        }
    }
    sort(res.begin(),res.end());
    res.erase(res.begin() + len - 1 , res.end());
    return res;
}
int main(){
    int n;
    cin >> n;
    vector<long long> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    for(int i=0; i<n-1; i++){
        v = solve(v);
    }
    int mod = 1000000007;
    cout<<(v[0])%mod<<endl;
    return 0;
}