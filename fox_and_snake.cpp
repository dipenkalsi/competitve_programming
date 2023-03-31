#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n , m;
    cin>>n>>m;
    // vector<vector<char>> v(n, vector<char>(m));
    int r = 0;
    int d = 1;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(r%2==0){
                cout<<"#";
            }
            else if(d%2==0){
                if(j==0) cout<<"#";
                else cout<<".";
            }
            else {
                if(j==m-1) cout<<"#";
                else cout<<".";
            }
        }
        if(r%2!=0) d++;
        r++;
        cout<<endl;
    }
    return 0;
}