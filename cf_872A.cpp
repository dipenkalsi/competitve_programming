#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        bool flag = true;
        for(int i=1; i<s.length(); i++){
            if(s[i]!=s[i-1]){
                flag = false;
                break;
            }
        }
        if(flag == false) cout<<s.size()-1<<endl;
        else cout<<"-1"<<endl;
    }
    return 0;
}