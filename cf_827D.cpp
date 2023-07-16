#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int __gcd(int a, int b) {
   if (b == 0)
   return a;
   return __gcd(b, a % b);
}
int main()
{
    long long testCase;
    cin>>testCase;
    while(testCase--){
        vector<int> v(1001,0);
        int n;
        cin>>n;
        int maxo=-1;
        for(int i=1;i<=n;i++){
            int temp;
            cin>>temp;
            v[temp]=i;
        }
        for(int i=1;i<=1000;i++){
            for(int j=1;j<=1000;j++){
                if(v[i] && v[j] && int(__gcd(i,j))==1){
                    maxo=max(maxo,v[i]+v[j]);
                }
            }
        }
        cout<<maxo<<endl;
    }
    return 0;
}