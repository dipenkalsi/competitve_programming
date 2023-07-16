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
        int ans = 0;
        stack<char> st;
        for(int i=0; i<n; i++){
            if(st.empty()){
                if(s[i]=='('){
                    st.push(s[i]);
                }
                else{
                    ans++;
                }
            }
            else{
                if(s[i]==')'){
                    if(st.top()=='(') st.pop();
                }
                else st.push(s[i]);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}