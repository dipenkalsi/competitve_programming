#include<bits/stdc++.h>
using namespace std;
int find(string s, char c){
    int length = -1;
    int count = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i]==c){
            length = max(length, count);
            count = 0;
        }
        else count++;
    }
    int res = INT_MAX;
    while(length > 0){
        if(res==INT_MAX) res = 1;
        else res++;
        length/=2;
    }
    return res;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int ans = INT_MAX;
        for(char c='a'; c<='z'; c++){
            ans = min(ans, find(s, c));
        }
        cout<<ans<<endl;
    }
    return 0;
}