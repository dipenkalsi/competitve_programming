#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s.size()<=3){
            cout<<"NO"<<endl;
            continue;
        }
        bool ans = false;
        for(int i=1; i<s.size()/2; i++){
            if(s[i]!=s[i-1]){
                ans = true;
                break;
            }
        }
        if(ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}