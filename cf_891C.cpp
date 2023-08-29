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
        int l=2;
        while((l*(l-1))/2!=n){
            l++;
        }
        vector<int> ans(l, INT_MAX);
        sort(v.begin(), v.end());
        ans.push_back(v[v.size()-1]);
        ans.push_back(v[v.size()-1]);
        v.pop_back();
        
    }
    return 0;
}