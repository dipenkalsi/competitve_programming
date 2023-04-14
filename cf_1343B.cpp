#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v;
        int even = 2, sum=0;
        int sum2 = 0, odd = 1;
        for(int i=0; i<n/2; i++){
            v.push_back(even);
            sum+=even;
            even+=2;
        }
        for(int i=0; i<n/2-1; i++){
            v.push_back(odd);
            sum2+=odd;
            odd+=2;
        }
        if((sum - sum2)%2==0){
            cout<<"NO"<<endl;
            continue;
        }
        else{
            v.push_back(sum- sum2);
            cout<<"YES"<<endl;
            for(int i=0; i<v.size(); i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}