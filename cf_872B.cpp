#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<int> v(m*n, 0);
        for(int i=0; i<n*m; i++){
            cin>>v[i];
        }
        sort(v.begin(), v.end());
        int maxi = v[v.size()-1];
        int mini = v[0];
        int secMini = v[1];
        int ans = (maxi - mini) * (m*n - min(m, n)) + (min(m, n)-1) * (maxi - secMini);
        cout<<ans<<endl;
    }
    return 0;
}