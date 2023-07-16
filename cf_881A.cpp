#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++) cin>>v[i];
        sort(v.begin(), v.end());
        int low = 0;
        int high = n-1;
        int ans = 0;
        while(high>low){
            ans+=v[high] - v[low];
            high--;
            low++;
        }
        cout<<ans<<endl;
    }
    return 0;
}