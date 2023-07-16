#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int ind1, ind2, indn;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
            if(v[i] ==1) ind1 = i;
            if(v[i] ==2) ind2 = i;
            if(v[i] ==n) indn = i;
        }
        if(indn > min(ind1,ind2) && indn < max(ind1,ind2)){
            cout<<"1 1"<<endl;
            continue;
        }
        else{
            if(abs(indn-ind1)<abs(indn-ind2)){
                cout<<ind1+1<<" "<<indn+1<<endl;
            }
            else cout<<ind2+1<<" "<<indn+1<<endl;
        }
    }
    return 0;
}