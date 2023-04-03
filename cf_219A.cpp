#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int k;
    cin>>k;
    string s;
    cin >> s;
    if(s==""){
        cout<<"-1"<<endl;
        exit(0);
    }
    map<char, int> mpp;
    for(int i=0; i<s.size(); i++){
        if(!mpp[s[i]]) mpp[s[i]] = 1;
        else mpp[s[i]]++;
    }
    bool flag = false;
    int el;
    el = mpp[s[0]];
    for(auto it:mpp){
        if(it.second!=el || el%k!=0){
            flag = true;
            break;
        }
    }
    if(flag){
        cout<<"-1"<<endl;
        exit(0);
    }
    string un = "";
    for(auto it :mpp){
        un+=it.first;
    }
    string ans = "";
    for(int i=0;i<el;i++){
        ans = ans + un;
    }
    cout<<ans<<endl;
    return 0;
}