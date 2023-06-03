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
        if(n%2!=0){
            cout<<-1<<endl;
        }
        int i=0;
        bool flag = false, flag2 = true;
        int ans = 0;
        for(int i=0;i<=n/2;i++){
            if(s[i]!=s[n-i-1]) continue;
            else{
                flag = false;
                for(int k=i+1; k<=n/2; k++){
                    if(s[k]!=s[i] && s[n-k-1]!=s[i]){
                         swap(s[i], s[k]);
                         ans++;
                         flag = true;
                         break;
                    }
                }
                if(!flag){
                    flag2 = false;
                     break;
                }
            }    
        }
        if(ans==0 || !flag2) cout<<"-1"<<endl;
        else cout<<ans<<endl;
        cout<<s<<endl;
    }
    return 0;
}