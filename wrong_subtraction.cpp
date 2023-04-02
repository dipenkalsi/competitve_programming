#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n, times;
    cin>>n>>times;
    for(int i=0; i<times; i++){
        if(n%10==0){
            n=n/10;
            continue;
        }
        else n--;
    }
    cout<<n<<endl;
    return 0;
}