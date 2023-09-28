#include<bits/stdc++.h>
using namespace std;

int f(string s){
    map<char, int> mpp;
    int ans = 0, len = 0;
    s = "#" + s;
    for(int i=1; i<s.size(); i++){
        if(mpp[s[i]]){
            ans = max(ans, len);
            len = i - mpp[s[i]];
            mpp[s[i]] = i;
        }
        else{
            mpp[s[i]] = i;
            len++;
        }
    }
    ans = max(ans, len);
    return ans;
}
int main(){
    string s = "dipendalsik";
    cout<<f(s);
    return 0;
}