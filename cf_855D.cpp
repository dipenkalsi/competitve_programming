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
        string last = "";
        int ans = n-1;
        for(int i=0; i<n-1; i++){
            string rev = string(last.rbegin(), last.rend());
            if(last==s.substr(i, 2) || rev==s.substr(i, 2)) ans--;
            else last = s.substr(i, 2);
        }
        cout<<ans<<endl;
    }
    return 0;
}