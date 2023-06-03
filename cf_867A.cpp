#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int c;
    cin>>c;
    while(c--){
        int n, t;
        cin>>n>>t;
        vector<int> dur(n), ent(n);
        for(int i=0; i<n; i++){
            cin>>dur[i];
        }
        for(int i=0; i<n; i++){
            cin>>ent[i];
        }
        int ans = -1;
        int maxi = INT_MIN;
        for(int i=0;i<n; i++){
            if(dur[i]<=t){
                if(ent[i]>maxi){
                    ans = i+1;
                    maxi = ent[i];
                }
            }
            t--;
        }
        cout<<ans<<endl;
    }
    return 0;
}