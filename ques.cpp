#include<bits/stdc++.h>
using namespace std;
string solve(vector<int>& arr){
    map<int, int> mpp;
    vector<pair<int, int>> v;
    string ans = "";
    for(auto it: arr) mpp[it]++;
    for(auto it: mpp){
        v.push_back({it.second, it.first});
    }
    sort(v.begin(), v.end());
    ans+=to_string(v[v.size()-1].second);
    ans+=to_string(v[v.size()-2].second);
    ans+=to_string(v[0].second);
    return ans;
}
int main(){
    vector<int> ans = {5, 123, 12, 45, 62, 77, 89, 23, 12, 14, 11, 14, 12, 90, 89, 12};
    cout<<solve(ans);
    return 0;
}