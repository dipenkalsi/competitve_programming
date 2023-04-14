#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
     cin >> t;
     while(t--){
        int n, x;
        cin>> n >> x;
        if(n==1 || n==2){
            cout<<"1"<<endl;
            continue;
        }
        for(int i=0; i<n; i++){
            if(i*x+3 <=n && (i+1)*x + 2>=n){
                cout<<i+2<<endl;
                break;
            }
        }
     }
    return 0;
}