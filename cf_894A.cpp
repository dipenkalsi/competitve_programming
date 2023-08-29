#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        string name = "vika";
        int n, m;
        cin>>n>>m;
        int ind = 0, last = -1 ;
        vector<vector<char>> v(n, vector<char>(m));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>v[i][j];
                if(v[i][j]==name[ind] && j>last){
                    ind++;
                    last = j;
                }
                if(ind==4) continue;
            }
        }
        if(ind==4) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}