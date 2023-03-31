#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    pair<int, int> maxi, mini;
    maxi = make_pair(-1e9, 0);
    mini = make_pair(1e9, 0);
    for(int i=0; i<n; i++){
        cin>>v[i];
        if(maxi.first<v[i]){
            maxi.first = v[i];
            maxi.second = i;
        }
        if(mini.first>=v[i]){
            mini.first = v[i];
            mini.second = i;
        }
    }
    if(maxi.second>mini.second){
        cout<<maxi.second + (n-mini.second - 2)<<endl;
    }
    else if(mini.second == maxi.second) cout<<0<<endl;
    else cout<<maxi.second + (n-1 - mini.second)<<endl;
    return 0;
}