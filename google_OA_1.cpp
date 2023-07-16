#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A(n), temp(n);
        for(int i=0; i<n; i++) cin>>A[i];
        temp = A;
        int q;
        cin>>q;
        for(int i=0; i<q; i++){
            int c;
            cin>>c;
            int k;
            cin>>k;
            for(int j=0; j<k; j++){
                int d;
                cin>>d;
                A[d-1]=1e9;
            }
            int ans = 0;
            sort(A.begin(), A.end());
            for(int i=0; i<A.size(); i++){
                c-=A[i];
                if(c<0) break;
                else ans++;
            }
            cout<<ans<<endl;
            A = temp;
        }
    }
    return 0;
}