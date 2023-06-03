#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int ans = 0;
        int cnt = 0;
        string name = "";
        for(int i=0; i<s.size(); i++){
            if(s[i] == '_'){
                int j=i;
                while(s[j]=='_' && j<s.size()){
                    j++;
                }
                j--;
                int count = j-i+1;
                if(i==0) count++;
                if(j==s.size()-1) count++;
                ans+=count-1;
                i=j+1;   
            }
            else cnt++;
        }
        if(cnt<2 && find(s.begin(), s.end(), '_')==s.end()) ans++;
        cout<<ans<<endl;
    }
    return 0;
}