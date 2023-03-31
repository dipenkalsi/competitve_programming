#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n, a, b, max = 0, p = 0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a>>b;
        p = b-a+p;
        if(p>max) max = p;
    }
    cout<<max<<endl;
    return 0;
}