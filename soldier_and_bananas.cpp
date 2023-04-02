#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int k, n, w;
    cin>>k>>n>>w;
    int total = (w*(w+1)/2)*k;
    if(total<=n) cout<<0<<endl;
    else cout<<total-n<<endl; 
    return 0;
}