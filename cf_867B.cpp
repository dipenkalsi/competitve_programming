#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        bool flag = false;
        vector<long long> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        sort(v.begin(), v.end());
        cout<<max(v[0]*v[1], v[n-1]*v[n-2])<<endl;
    }
    return 0;
}