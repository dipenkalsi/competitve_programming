#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n, num;
    cin>>n;
    int flag = 0;
    for(int i=0;i<n;i++){
        cin>>num;
        if(num==1){
            flag = 1;
            cout<<"HARD"<<endl;
            break;
        } 
    }
    if(flag==0) cout<<"EASY"<<endl;
    return 0;
}