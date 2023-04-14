#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n, k;
        cin >> n >> k;
        if(n%k==0 || n%2==0){
            cout<<"YES"<<endl;
            continue;
        }
        for(int i=1; i<10e18; i++){
            if(n- k*i<0){
                cout<<"NO"<<endl;
                break;
            }
            if((n - k*i)%2==0) {
                cout<<"YES"<<endl;
                break;
            }
        }

    }
    return 0;
}