#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n), ans;
        int els = 0;
        for(int i=0; i<n; i++) cin>>v[i];
        for(int i=n-1; i>=0; i--){
           if(i==n-1){
                for(int j=0; j<v[n-1]; j++){
                    ans.push_back(n);
                }
                els++;
           } 
           else if(v[i]==v[i+1]){
                els++;
           }
           else{
                int h = n - els;
                for(int j=0; j<abs(v[i]-v[i+1]); j++){
                    ans.push_back(h);
                }
                els++;
           }
        }
        int elss = n - ans.size();
        for(int i=0; i<elss; i++){
            ans.push_back(ans[ans.size()-1]);
        }
        
        if(ans==v) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
 }
    return 0;
}