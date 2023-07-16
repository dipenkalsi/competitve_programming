#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int x, y;
        cin>>x>>y;
        int ans = 0;
        ans = (x-y)*2;
        cout<<ans<<endl;
        for(int i=max(x, y); i>=min(x, y); i--){
            cout<<i<<" ";
        }
        for(int i=min(x, y)+1; i<=max(x, y)-1; i++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}