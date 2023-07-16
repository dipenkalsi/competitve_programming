#include<bits/stdc++.h>
using namespace std;
void find(long long n,map<int,int>&count){   
    for(int i=2;i*i<=n;++i){
        while(n%i == 0){
            n/=i;
            count[i]++;
        }
    }
    if(n>1) count[n]++;
}
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        map<int, int> mpp;
        for(int i=0; i<n; i++){
            find(v[i], mpp);
        }
        int ans = 0;
        int left = 0;
        for(auto it: mpp){
            ans+=it.second/2;
            left+= it.second % 2;
        }
        // if(left%3!=0){
        //     if(ans>0){
        //         ans+=left/3;
        //         cout<<ans<<endl;
        //     }
        //     else cout<<"0"<<endl;
        // }
        // else{
        //     ans+=left/3;
        //     cout<<ans<<endl;
        // }
        ans+=left/3;
        cout<<ans<<endl;
    }
    return 0;
}