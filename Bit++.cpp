#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n, x=0;
    cin>>n;
    for(int i=0;i<n;i++){
        string st;
        cin>>st;
        if(st=="X++") x++;
        if(st=="++X") ++x;
        if(st=="X--") x--; 
        if(st=="--X") --x;
    }
    cout<<x;
    return 0;
}