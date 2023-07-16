#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    int ans = 0;
    // int one = 0, two = 0, three = 0;
    // for(int i=0; i<n; i++){
    //     int k;
    //     cin>>k;
    //     if(k==1){
    //         if(one>0) one--;
    //         else{
    //             ans++;
    //             three++;
    //         }
    //     }
    //     if(k==2){
    //         if(two>0) two--;
    //         else{
    //             two++;
    //             ans++;
    //         }
    //     }
    //     if(k==3){
    //         if(three>0) three--;
    //         else{
    //             one++;
    //             ans++;
    //         }
    //     }
    //     if(k==4){
    //         ans++;
    //     }
    // }
    int ones = 0, twos = 0, threes = 0;
    for(int i=0; i<n; i++){
        int k;
        cin>>k;
        if(k==1) ones++;
        if(k==2) twos++;
        if(k==3) threes++;
        if(k==4) ans++;
    }
    if(threes <= ones){
        ones-=threes;
        ans+=threes;
    }
    else{
        ans+=threes;
        ones = 0;
    }
    ans+=twos/2;
    twos = twos%2;
    if(twos==1){
        if(ones>=2) ones-=2;
        ans++;     
    }
    ans+=ones/4;
    ones = ones%4;
    if(ones>=1) ans++;
    cout<<ans<<endl;
    return 0;
}