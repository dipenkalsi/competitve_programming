#include<bits/stdc++.h>
using namespace std;
 
int main(){
    string name;
    set<char> st;
    cin>>name;
    for(int i=0; i<name.size();i++){
        st.insert(name[i]);
    }
    if(st.size()%2==0) cout<<"CHAT WITH HER!";
    else cout<<"IGNORE HIM!";
    return 0;
}