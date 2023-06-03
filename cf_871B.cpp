#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        int ans = 0;
        int streak = 0;
        for(int i=0; i<n; i++){
            if(v[i]==0) streak++;
            else{
                ans = max(ans, streak);
                streak = 0;
            }
        }
        ans = max(ans, streak);
        cout<<ans<<endl;
    }
    return 0;
}