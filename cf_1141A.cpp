#include<bits/stdc++.h>
using namespace std;
int f(int n, int m){
    if(n>m) return 1e9;
    if(n==m) return 0;
    return min(1+f(2*n, m), 1+f(3*n, m));
}
int main(){
    int n, m;
    cin >>n >> m;
    if(f(n,m)>1e9){
        cout<<"-1"<<endl;
    }
    else cout<<f(n,m)<<endl;
    return 0;
}