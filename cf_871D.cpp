#include<bits/stdc++.h>
using namespace std;
bool f(int n, int target){
    if(n%3!=0) return false;
    int a = 2*(n/3), b = n/3;
    if(a==target || b==target) return true;
    else return f(a, target) || f(b, target);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,target;
        cin>>n>>target;
        if(f(n, target) || n==target) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}