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
        map<int, int> mpp;
        bool flag = true;
        for(int i=0; i<n; i++){
            if(v[i]==0) mpp[0]++;
            else if(mpp[v[i]-1]){
                mpp[v[i]-1]--;
                mpp[v[i]]++;
            }
            else{
                flag = false;
                break;
            }
        }
        if(!flag) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}