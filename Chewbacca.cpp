#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    string s = to_string(n);
    string ans="";
    for(int i=0;i<s.size();i++){
        if(s[i]>'4'){
            if(s[i]=='5') ans+='4';
            if(s[i]=='6') ans+='3';
            if(s[i]=='7') ans+='2';
            if(s[i]=='8') ans+='1';
            if(s[i]=='9' && i!=0) ans+='0';
            if(s[i]=='9' && i==0) ans+='9';
        }
        else ans+=s[i];
    }
    cout<<stoi(ans);
    return 0;
}