#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> v(n);
        bool allNegs = true;
        for(int i=0; i<n; i++){
            cin>>v[i];
            if(v[i]>=0) allNegs = false;
        } 
        long long evenSum = 0, oddSum = 0, zero = 0;
        for(int i=0; i<n; i++){
            if(i%2==0) evenSum+=max(v[i], zero);
            if(i%2!=0) oddSum+=max(v[i], zero);
        }
        if(allNegs) cout<<*max_element(v.begin(), v.end())<<endl;
        else cout<<max(evenSum, oddSum)<<endl;
    }
    return 0;
}