#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t, i, j, ans, c, f, sum, n;
    ll p[100001];
    
    for(i=0; i<=100000; i++){
        p[i]=i;
    }
    
    for(i=2; i<=100000; i++)
    {
        if(p[i]==i){
            for(j=i*i; j<=100000; j+=i){
                if(p[j]==j){
                    p[j]=i;
                }
            }
        }
    }
    
    cin>>t;
    
    queue<pair<ll, ll>> q1, q2;
    
    for(;t--;)
    {
        ans=0;
        cin>>n;
        
        for(i=2; i*i<=n; i++)
        {
            if((n%i)==0){
                c=0;
                f=i;
                
                while((n%i)==0){
                    n/=i;
                    c++;
                }
                
                q1.push({i, c});
            }
        }
        if(n>1){
            q1.push({n, 1});
        }
        
        while(q1.empty()==false){
            
            sum=1;
            
            while(q1.empty()==false){
                sum=(sum*q1.front().first);
                
                if(q1.front().second>1){
                    q2.push({q1.front().first, q1.front().second-1});
                    
                }
                q1.pop();
            }
            ans=ans+sum;
            while(q2.empty()==false){
                q1.push(q2.front());
                q2.pop();
            }
            
        }
        
        cout<<ans<<"\n";
        
    }
}