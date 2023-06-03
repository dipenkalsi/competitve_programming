#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        bool hasq = false;
        for(int i=0; i<s.size(); i++){
            if(s[i] == '?'){
                hasq = true;
                if(i!=0){
                    s[i]=s[i-1];
                }
                else{
                    s[i] = '0';
                }
            }
        }
        cout<<s<<endl;
    }
    return 0;
}