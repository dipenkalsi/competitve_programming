#include <bits/stdc++.h> 
using namespace std;
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define ll long long int
#define endl "\n"
 
void solve(){
    int n; cin>>n; // string s; cin>>s;
    cout<<2<<endl; int a=n,b=n-1;
    for(int i=1;i<n;i++){
        cout<<a<<" "<<b<<endl;
        a=(a+b+1)/2;b--;
    }
}
 
int main(){
    fio;
    int t;  cin>>t;  
    while(t--){ 
            solve();
    }
}