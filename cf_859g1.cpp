#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        bool solved = false;
        for(int i=0; i<n; i++) cin>>v[i];
        sort(v.begin(), v.end());
        int sum = 1;
        if(v[0]>1){
            cout<<"NO"<<endl;
            continue;
        }
        for(int i=1; i<n; i++){
            if(v[i]<=sum) sum+=v[i];
            else{
                solved = true;
                break;
            }
        }
        if(!solved) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}