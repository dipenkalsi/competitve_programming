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
            cin>> v[i];
        }
        if(n%2==0){
            bool flag = true;
            bool res = false;
            for(int i=0; i<n-1; i++){
                if(v[i]>v[i+1] && !flag){
                    res = false;
                    break;
                }
                else if(v[i]<v[i+1] && flag){
                    res = false;
                    break;
                }
                flag = !flag;
            }
            if(!res) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}