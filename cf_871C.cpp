#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int min1 = INT_MAX, min2 = INT_MAX, min3 = INT_MAX;
        for(int i=0; i<n; i++){
            int k;
            cin>>k;
            string s;
            cin>>s;
            if(s[0]=='1' && s[1]=='1'){
                min3 = min(min3, k);
                min1 = min(min1, k);
                min2 = min(min2, k);
            }
            if(s[0]=='1') min1 = min(min1, k);
            if(s[1]=='1') min2 = min(min2, k);
        }
        if(min1 == INT_MAX || min2 == INT_MAX){
            if(min3 == INT_MAX) cout<<"-1"<<endl;
            else cout<<min3<<endl;
        }
        else if(min3!=INT_MAX){
            cout<<min(min1 + min2, min3)<<endl;
        }
        else cout<<min1 + min2 << endl;
    }
    return 0;
}