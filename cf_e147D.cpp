#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n;
        cin>>s;
        if(n%2!=0){
            cout<<"-1"<<endl;
            continue;
        }
        char lastFirst;
        int c = 1;
        int ans = 1;
        vector<int> v;
        stack<char> st;
        for(int i=0; i<n; i++){
            if(s[i]=='('){
                if(st.empty()){
                    st.push(s[i]);
                    v.push_back(c);
                    lastFirst = s[i];
                    continue;
                }
                if(st.top()==')'){
                    st.pop();
                    v.push_back(c);
                    if(st.empty()) {
                        // if(i==n-1) c++;
                        if(i!=n-1 && s[i+1]!=lastFirst){
                            if(c==1) c=2;
                            else c=1;
                            ans = 2;
                        }
                    }
                }
                else{
                    st.push(s[i]);
                    v.push_back(c);
                }
            }
            if(s[i]==')'){
                if(st.empty()){
                    st.push(s[i]);
                    v.push_back(c);
                    lastFirst = s[i];
                    continue;
                }
                if(st.top()=='('){
                    st.pop();
                    v.push_back(c);
                    if(st.empty()) {
                        // if(i==n-1) c++;
                        if(i!=n-1 && s[i+1]!=lastFirst){
                            if(c==1) c=2;
                            else c=1;
                            ans = 2;
                        }
                    }
                }
                else{
                    st.push(s[i]);
                    v.push_back(c);
                }
            }
        }
        if(!st.empty()){
            cout<<"-1"<<endl;
        }
        else{
            cout<<ans<<endl;
            for(int i=0; i<v.size(); i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}