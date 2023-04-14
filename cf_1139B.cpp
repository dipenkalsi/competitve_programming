#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    long long chocos = v[n-1];
    long long last = v[n-1];
    for(int i=n-2; i>=0; i--){
        if(v[i]<last){
            chocos+=v[i];
            last = v[i];
        }
        else{
            chocos = chocos +last -1;
            last--;
        }
        if(last==0) break;
    }
    cout<<chocos<<endl;
    return 0;
}