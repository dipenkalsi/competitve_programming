#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b;
        cin>>a>>b;

        if((a+b)%3==0){
            if(a<b){
                if(b<=2*a) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
                continue;
            }
            else if(b<a){
                if(a<=2*b) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
                continue;
            }
            else cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}