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
        vector<int> v(n);
        int ans = 0;
        for(int i=0; i<n; i++) cin>>v[i];
        int ptr = 0;
        if(s[0]=='1'){
            while(s[ptr]=='1' && ptr<n){
                ans+=v[ptr];
                ptr++;
            }
        }
        int mini = 0;
        for(int i=ptr; i<n; i++){
            if(s[i]=='1'){
                ans+=v[i];
                mini = min(mini, v[i]);
            }
            else{
                ans-=mini;
                mini = v[i];
                if(i!=n-1) ans+=v[i];
            }
        }
        if(s[n-1]=='1') ans-=mini;
        cout<<ans<<endl;
    }
    return 0;
}