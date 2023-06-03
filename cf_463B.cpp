#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    int ans = 0, en = 0;
    for(int i=0; i<n; i++){
        cin>>v[i];
        if(i==0) {
            ans+=v[i];
        }
        else{
            int change = v[i-1] - v[i];
            en+=change;
            if(en<0){
                ans-=en;
                en = 0;
            }
        }
    }
    if(en<0){
        ans-=en;
    }
    cout<<ans<<endl;
    return 0;
}