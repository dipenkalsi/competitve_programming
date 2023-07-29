#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n, m, k;
    cin>>n>>k>>m;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    for(int i=0; i<k; i++){
        for(int j=0; j<v.size()-i-1; j++){
            v[j] = v[j]^v[j+1];
        }
    }
    cout<< v[m];
    return 0;
}