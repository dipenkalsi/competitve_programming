#include<bits/stdc++.h>
using namespace std;
 
int main(){
    string s;
    cin >> s;
    vector<char> v;
    for(int i=0;i<s.size();i++){
        if(i%2==0) v.push_back(s[i]);
    }
    sort(v.begin(),v.end());
    string ans="";
    for(int i=0;i<v.size();i++){
        if(i!=v.size()-1){
            ans+=v[i];
            ans+="+";
        }
        else ans+=v[i];
    }
    cout<<ans<<endl;
    return 0;
}