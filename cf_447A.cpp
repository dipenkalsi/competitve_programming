#include<bits/stdc++.h>
using namespace std;
int f(int i, string s, string sub){
    if(i==s.size() || sub.size()>3) return 0;
    string str = sub+=s[i];
    int pick = f(i+1, s, str);
    int notPick = f(i+1, s, sub);
    int bit;
    if(sub=="QAQ"){
        bit = 1;
    }
    else bit = 0;
    return bit + pick + notPick;
}
int main(){
    string s;
    cin>>s;
    cout<<f(0, s, "");
    return 0;
}