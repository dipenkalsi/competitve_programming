#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long ans = 0;
        while(n!=1){
            ans += n;
            if(n%2!=0){
                n--;
            }
            n/=2;
        }
        cout<<ans+1<<endl;
    }
    return 0;
}