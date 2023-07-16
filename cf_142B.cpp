#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t, a1, a2, a3, a4, i, j, ans;
    
    cin>>t;
    
    for(;t--;)
    {
        cin>>a1>>a2>>a3>>a4;
        
        if(a1==0){
            if(a2>0 || a3>0 || a4>0){
                cout<<"1\n";
            }else{
                cout<<"0\n";
            }
            continue;
        }
        
        ans=a1;
        
        if(a2>a3){
            swap(a2, a3);
        }
        
        ans=ans+2*a2;
        
        a3=a3-a2;
        
        ans=ans+min(a1+1, a3+a4);
        
        cout<<ans<<"\n";
    }
}