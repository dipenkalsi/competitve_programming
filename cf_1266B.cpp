#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    for(int i=0; i<n; i++){
        int num = 0;
        int maxi = v[i];
        int quo = maxi / 21;
        if(maxi%21==0) num = quo;
        else num = quo+1;
        int diff = 21*num - v[i];
        int quo7 = diff/7;
        if(quo7!=(num-1) || diff%7==0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}



