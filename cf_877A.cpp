#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        bool ans = false;
        int n;
        cin>>n;
        vector<int> v;
        for(int i=0; i<n; i++){
           int k;
           cin>>k;
            if(k<0){
                v.push_back(k);
                if(!ans) cout<<k<<endl;
                ans = true;
            }
            v.push_back(k);
        }
        if(!ans) cout<<*max_element(v.begin(), v.end())<<endl;
    }
    return 0;
}