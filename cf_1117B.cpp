#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n, m, k;
    cin>>n>>m>>k;
    vector<long long> v(n);
    long long maxi = 0;
    int index;
    for(int i=0; i<n; i++){
        cin>>v[i];
        if(v[i]>maxi) index = i;
        maxi = max(maxi,v[i]);
    }
    v.erase(v.begin()+index);
    long long secMax = *max_element(v.begin(), v.end());
    long long ans = (m/(k+1))*(maxi*k + secMax) + (m%(k+1))*maxi;
    cout<<ans<<endl;
    return 0;
}