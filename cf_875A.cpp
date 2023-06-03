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
        int sum = *min_element(v.begin(), v.end()) + *max_element(v.begin(), v.end());
        for(int i=0; i<n; i++){
            cout<<sum-v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}