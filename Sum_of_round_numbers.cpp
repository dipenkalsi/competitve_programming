#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    int num;
    for(int i=0;i<n;i++){
        cin>>num;
        if(num<=9 || num%10==0){
            cout<<1<<endl;
            cout<<num<<endl;
            continue;
        }
        vector<int> v;
        for(int count = 10;num>0;count*=10){
            int rem = num%count;
            if(rem!=0) v.push_back(rem);
            num-=rem;
        }
        cout<<v.size()<<endl;
        for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
        cout<<endl;
    }
    return 0;
}