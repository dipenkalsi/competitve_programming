#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int p, neg;
        bool flag = false;
        for(int i=0; i<=n; i++){
            if(i*(i-1)/2 + (n-i)*(n-i-1)/2 == k){
                p = i;
                neg = n - i;
                flag = true;
                break;
            }
        }
        if(!flag) cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            for(int i=0; i<p; i++){
                cout<<"1 ";
            }
            for(int i=0; i<neg; i++){
                cout<<"-1 ";
            }
            cout<<endl;
        }
    }
    return 0;
}