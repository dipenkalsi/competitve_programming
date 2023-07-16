#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    int one = 0, two = 0;
    for(int i=0; i<n; i++){
        int k;
        cin>>k;
        if(k==25){
            one++;
        }
        else if(k==50){
            if(one==0){
                cout<<"NO";
                exit(0);
            }
            one--;
            two++;
        }
        else{
            if(one>0 && two>0){
                one--;
                two--;
            }
            else{
                if(one>=3){
                    one-=3;
                }
                else{
                    cout<<"NO"<<endl;
                    exit(0);
                } 
            }
        }
    }
        cout<<"YES";
    return 0;
}