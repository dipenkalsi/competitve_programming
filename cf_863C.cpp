#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n-1);
        for(int i=0; i<n-1; i++){
            cin >> v[i];
        }
        vector<int> ans = v;
        ans.insert(ans.begin() + 1, min(v[0], v[1]));
        for(int i=0; i<n-1 ;i++){
            int el = max(ans[i], ans[i+1]);
            if(el == v[i]) continue;
            else{
                ans[i] = min(ans[i], ans[i+1]);
            }
        }
        for(int i=0; i<n; i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}