#include<bits/stdc++.h>
using namespace std;
int getHCF(int a, int b)
{
    return b == 0 ? a : getHCF(b, a % b); 
}
int main(){
    int t;
    cin>> t;
    while(t--){
        int a, b;
        cin>>a>>b;
        if(a==1 && b==1){
            cout<<"1"<<endl;
            cout<<"1 1"<<endl;
            continue;
        }
        if(getHCF(a, b)==1 && a!=0 && b!=0){
            cout<<"1"<<endl;
            cout<<a<<" "<<b<<endl;
            continue;
        }
        if(a!=0 && b!=0){
            cout<<"2"<<endl;
            cout<<a-1<<" 1"<<endl;
            cout<<a<<" "<<b<<endl;
            continue;
        }
        else if(a==0){
            cout<<"2"<<endl;
            cout<<"1 "<<b<<endl;
            cout<<a<<" "<<b<<endl;
        }
        else{
             cout<<"2"<<endl;
            cout<<a<<" 1"<<endl;
            cout<<a<<" "<<b<<endl;
        }
    }
    return 0;
}