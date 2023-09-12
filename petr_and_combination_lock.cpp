#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    for(int i=0; i<pow(2, n); i++){
        int j = i;
        int sum = 0;
        int ind = 0 ;
        while(j){
            if(j & 1){
                //adding the element.
                sum+=v[ind];
            }
            else sum-=v[ind];
            ind++;
            j = j>>1;
        }
        for(int k=ind; k<n; k++){
            sum-=v[k];
        }
        if(sum==0 || sum%360==0){
             cout<<"YES"<<endl;
             exit(0);
        }
    }
    cout<<"NO"<<endl;
    return 0;
}