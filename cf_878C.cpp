#include<bits/stdc++.h>
using namespace std;
 int fact(int n) {

   int fact = 1;
   for(int i=1; i<=n; i++){
    fact*=i;
   }
   return fact;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long ans = 0;
        long long n, k, q;
        cin>>n>>k>>q;
        bool flag = true;
        vector<long long> v;
        v.push_back(0);
        for(int i=1; i<=n; i++){
            int d;
            cin>>d;
            if(d<=q){
                if(!flag){
                    v.push_back(1);
                    flag = true;
                }
                else v[v.size()-1]++;
            }
            else{
                flag = false;
            }
        }
        for(int i=0; i<v.size(); i++){
            if(v[i]-k+1<0) continue;
            ans+= (v[i]-k+1)*(v[i]-k+2)/2;
        }
        cout<<ans<<endl;
    }
    return 0;
}