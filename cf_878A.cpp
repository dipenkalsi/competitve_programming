#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        string ans = "";
        bool flag = false;
        char c;
        for(int i=0; i<n; i++){
            if(!flag){
                c = s[i];
                flag = true;
                continue;
            }
            if(s[i]==c){
                flag = false;
                ans+=c;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}