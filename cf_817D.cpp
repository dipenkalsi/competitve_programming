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
        long long ans = 0;
        vector<long long> v(n);
        for(int i=0; i<n; i++){
            if(s[i]=='L') ans+=i;
            else ans+=n-i-1;
            if(s[i]=='L') v[i] =(n-i-1)-i;
            else v[i] = i - (n-i-1);
        }
        sort(v.begin(), v.end(), greater<int>());
        for(int i=0; i<v.size(); i++){
            if(v[i]>0) ans+=v[i];
            cout<<ans<<" ";
        }
        cout<<endl;
    }
    return 0;
}