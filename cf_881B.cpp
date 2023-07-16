#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ops = 0;
        vector<long long> v(n);
        long long ans = 0;
        bool flag = true;
        for(int i=0; i<n; i++){
            cin>>v[i];
            ans+=abs(v[i]);
            if(v[i]>0) flag = true;
            if(v[i]<0){
                if(flag){
                    ops++;
                    flag = false;
                }
            }
        }
        cout<<ans<<" "<<ops<<endl;
    }
    return 0;
}