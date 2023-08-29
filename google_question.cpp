#include<bits/stdc++.h>
using namespace std;
int f(int i, string& s, string& ds){
    if(i==s.size() || ds.size()==5){
        if(ds.size()==5){
            for(int i=0; i<2; i++){
                if(ds[i]!=ds[5-i-1]) return 0;
            }
            return 1;
        }
        return 0;
    } 
    int res = 0;
    ds+=s[i];
    res+=f(i+1, s, ds);
    ds.pop_back();
    res+=f(i+1, s, ds);
    return res;
}
int main(){
    string s = "103301", ds = "";
    cout<<f(0, s, ds);
    return 0;
}