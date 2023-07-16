#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int x, l, r, a, b;
        cin>>l>>r>>x;
        cin>>a>>b;
        if(b<l || b>r || (a-x<l && b<a) || (a+x>r && b>a)){
            cout<<"-1"<<endl;
            continue;
        }
        if(abs(b-a)>=x){
            cout<<"1"<<endl;
            break;
        }
        
    }
    return 0;
}