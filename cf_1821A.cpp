#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int cnt = count(s.begin(), s.end(), '?');
        if(s[0]=='0'){
            cout<<"0"<<endl;
            continue;
        }
        if(cnt==0){
            if(s[0]!='0') cout<<"1"<<endl;
            else cout<<"0"<<endl;
            continue;
        }
        int ans = 0;
        if(s[0]=='?'){
            cout<<9*pow(10, cnt-1)<<endl;
        }
        else {
        cout<<pow(10, cnt)<<endl;
        }
    }
    return 0;
}