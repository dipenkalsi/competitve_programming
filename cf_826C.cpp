#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v;
        int sum = 0;
        for(int i=0; i<n; i++){
            int k;
            cin>>k;
            sum+=k;
            v.push_back(sum);
        }
        int ans = n;
        for(int i=0; i<n; i++){
            int local = i+1;
            bool flag = false;
            int sum = 0;
            int last = i;
            for(int j=i; j<n; j++){
                if(sum==v[i]){
                    sum = 0;
                    local = max(local, j-last);
                    last = j;
                    if(j==n-1){
                        ans = min(ans, local);
                    } 
                }
                else sum += v[j];
                cout<<sum<<endl;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}