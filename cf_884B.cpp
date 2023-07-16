#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n<=2){
            for(int i=n; i>=1; i--){
                cout<<i<<" ";
            }
            cout<<endl;
        }
        else{
            vector<int> v(n, 0);
            v[0] = 2;
            v[n-1] = 3;
            v[n/2] = 1;
            int k = 4;
            for(int i=0; i<n; i++){
                if(v[i]==0){
                    v[i] = k;
                    k++;
                }
            }
            for(int i=0; i<n; i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}