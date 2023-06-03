#include<bits/stdc++.h>
using namespace std;
void solve(){
 string s;
 cin>>s;
 char mini = '9';
 int n = s.size();
 for(int i=n-1; i>=0; i--){
    if(s[i]<=mini){
        mini = s[i];
    }
    else{
        s[i] = min((char)(s[i]+1), (char)('9'));
    }
 }
 sort(s.begin(), s.end());
 cout<<s<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}