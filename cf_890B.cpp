#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n, sum=0, cnt=0;
        cin>>n;
        for(int i=0; i<n; i++){
            int k;
            cin>>k;
            sum+=k;
            if(k==1) cnt++;
        }
        if(n==1){
             cout<<"NO"<<endl;
             continue;
        }
        if(sum>=n+cnt) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}