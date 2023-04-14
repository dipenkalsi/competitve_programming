#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n+1;i++){
        for(int k = 0; k<(2*n+1-(2*i+1)); k++) cout<<" ";
        int j=0;
        for(j=0;j<=i;j++){
            if(i==0) cout<<j;
            else cout<<j<<" ";
        }
        j-=2;
        for(j;j>=0;j--){
            if(j==0) cout<<j;
            else cout<<j<<" ";
        }
        cout<<endl;
    }
    for(int i=n-1;i>=0;i--){
        for(int k = 0; k<(2*n+1-(2*i+1)); k++) cout<<" ";
        int j=0;
        for(j=0;j<=i;j++){
            if(i==0) cout<<j;
            else cout<<j<<" ";
        }
        j-=2;
        for(j;j>=0;j--){
            if(j==0) cout<<j;
            else cout<<j<<" ";
        }

        cout<<endl;
    }
    return 0;
}