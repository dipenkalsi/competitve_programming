#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int l = 1, r = 1;
        int n;
        bool flag = false;
        int maxl = 1, maxr = 0;
        cin>>n;
        vector<int> v1(n+1), v2(n+1);
        for(int i=1; i<=n; i++){
            cin>>v1[i];
        }
        for(int i=1; i<=n; i++){
            cin>>v2[i];
            if(v2[i]!=v1[i]){
                if(!flag){
                     l = i;
                     r = i;
                     flag = true;
                }
                else r++;
            }
        }
        int cntl = 0, cntr = 0; 
        for(int i=l; i>=2; i--){
            if(v2[i]>=v2[i-1]) cntl++;
            else break;
        }
        l-=cntl;
        for(int i=r; i<=n-1; i++){
            if(v2[i]<=v2[i+1]) cntr++;
            else break;
        }
        r+=cntr;
        cout<<l<<" "<<r<<endl;
    }
    return 0;
}