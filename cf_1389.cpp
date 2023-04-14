#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>> t;
    while(t--){
        int l, r;
        cin >> l >> r;
        if(r>=l*2){
            cout<<l<<" "<<l*2<<endl;
        }
        else cout<<"-1 -1"<<endl;
    }
    return 0;
}