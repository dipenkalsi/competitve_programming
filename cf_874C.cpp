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
        sort(v.begin(), v.end());
        if(v[0]%2==0){
            bool hasOdd = false;
            for(int i=1; i<n; i++){
                if(v[i]%2!=0){
                    hasOdd = true;
                    break;
                }
            }
            if(hasOdd) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}