#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    if(n==1 || n==2){
        cout<<"No"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
        cout<<"1 "<<n<<endl;
        cout<<n-1<<" ";
        for(int i=1; i<n; i++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}