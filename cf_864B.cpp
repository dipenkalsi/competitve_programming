#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        vector<vector<int>> v(n, vector<int>(n));
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin>>v[i][j];
            }
        }
        int ans = 0;
        bool flag = true;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(v[i][j] != v[n-i-1][n-j-1]){
                    ans++;
                } 
                if(ans>k*2){
                    flag = false;
                    break;
                }
                
            }
        }
        if(!flag) cout<<"NO"<<endl;
        else if((k-(ans/2))%2==0 && n%2==0) cout<<"YES"<<endl;
        else if(n%2!=0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}