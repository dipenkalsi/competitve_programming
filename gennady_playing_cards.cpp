#include<bits/stdc++.h>
using namespace std;
 
int main(){
    string s;
    cin >> s;
    char rank = s[0];
    char suit = s[1];
    string card;
    int flag = 0;
    for(int i=0;i<5;i++){
        cin >> card;
        if(card[0]==rank || card[1]==suit){
            cout<<"YES"<<endl;
            flag = 1;
            break;
        }
    }
    if(!flag) cout<<"NO"<<endl;
    return 0;
}