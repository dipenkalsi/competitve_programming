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
        vector<int> temp;
        int ans = 0;
        sort(v.begin(), v.end());
        for(int i=0; i<n; i++){
            temp.push_back(v[i]);
            if(temp[temp.size()-1]==temp.size()){
                ans++;
                temp.clear();
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}