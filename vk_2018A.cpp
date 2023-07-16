#include<bits/stdc++.h>
using namespace std;
bool check(string s, string can){
    if(s.size()!=can.size()) return true;
    bool ans = true;
    for(int i=0; i<s.size(); i++){
        if(s[i]==can[i] || abs(s[i]-can[i])==32 || (s[i]=='1' && can[i]=='l') || (s[i]=='l' && can[i]=='1') || (s[i]=='1' && can[i]=='I') || (s[i]=='I' && can[i]=='1') || (s[i]=='l' && can[i]=='I') || (s[i]=='I' && can[i]=='l') || (s[i]=='O' && can[i]=='0') || (s[i]=='0' && can[i]=='O') || (s[i]=='0' && can[i]=='o') || (s[i]=='o' && can[i]=='0') || (s[i]=='i' && can[i]=='1') || (s[i]=='1' && can[i]=='i')) ans = false;
        else return true;
    }
    return ans;
}
int main(){
    string s;
    int n;
    cin>>s;
    cin>>n;
    vector<string> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    for(int i=0; i<n; i++){
        if(!check(s, v[i])){
            cout<<"No"<<endl;
            exit(0);
        }
    }
    cout<<"Yes"<<endl;
    return 0;
}