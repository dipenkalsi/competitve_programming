#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int ans = 0;
        int n, m;
        cin>>n>>m;
        vector<vector<int>> v(n, vector<int>(m, 0));
        vector<int> sum(m, 0);
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>v[i][j];
                if(i!=0) ans+=abs(sum[j] - i*v[i][j]);
                sum[j]+=v[i][j];
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}