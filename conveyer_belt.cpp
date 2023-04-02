#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a, b;
        cin>>a>>b;
        vector<vector<char>> v(a, vector<char>(b));
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                cin>>v[i][j];
            }
        }
        int ans = 0;
        for(int j=0;j<b-1;j++){
            if(v[a-1][j]=='D') ans++;
        }
        for(int i=0;i<a-1;i++){
            if(v[i][b-1]=='R') ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}