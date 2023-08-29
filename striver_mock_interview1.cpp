#include<bits/stdc++.h>
using namespace std;
vector<int> f(int i, vector<double>& arr, vector<int>& ds, int sum){
    if(i==arr.size()){
        if(sum==0) return ds;
        vector<int> dummy;
        return dummy;
    }
    ds.push_back(floor(arr[i]));
    vector<int> fl = f(i+1, arr, ds, sum+floor(arr[i]));
    if(fl.size()==arr.size()) return fl;
    ds.pop_back();
    ds.push_back(ceil(arr[i]));
    vector<int> cl = f(i+1, arr, ds, sum+ceil(arr[i]));
    return cl;
}
int main(){
    vector<double> arr= {4.566, 1.243, -2.434, -3.4};
    vector<int> ds;
    vector<int> ans = f(0, arr, ds, 0);
    cout<<ans.size();
    for(int i=0; i<ans.size(); i++) cout<<ans[i]<<" ";
    return 0;
}