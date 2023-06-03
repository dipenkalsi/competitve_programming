#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b;
        cin>>a>>b;
        int ans = 0;
        int length = 1;
        int mini = min(a,b);
        ans+=mini;
        length = mini;
        int maxi = max(a,b);
        for(int i=length; i<=maxi; i++){
            int steps = min((i-length) + (maxi/length), );
        }
        // int steps = maxi - length + 1;
        // ans+=steps;
        cout<<ans<<endl;
    }
    return 0;
}



