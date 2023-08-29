#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        int maxi = 0;
        for(int i=0; i<n; i++){
            cin>>v[i];
            if(i!=0) if(v[i]<v[i-1]){
                maxi = max(maxi, v[i-1]);
            } 
        }
        cout<<maxi<<endl;
    }
    return 0;
}