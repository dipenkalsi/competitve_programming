#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long ans = 2*n;
        long long sub = 1;
        ans+= ((n-1)*n/2) - 1;
        ans+=3;
        ans+= ((n+1)*n/2);
        cout<<ans<<endl;
    }
    return 0;
}