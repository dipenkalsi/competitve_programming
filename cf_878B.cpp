#include<bits/stdc++.h>
using namespace std;
void f(long long& ans, int n, int des, int k){
    if(n<=0||des==k-1) return;
    if(n>=pow(2, des)){
        ans++;
        f(ans, n-pow(2, des), des+1, k);

        f(ans, n, des+1, k);
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long ans = 1;
        int n, k;
        cin>>n>>k;
        if(k==1) {
            cout<<"2"<<endl;
            continue;
        }

        else f(ans, n, 0, k);
        cout<<ans<<endl;
    }
    return 0;
}

