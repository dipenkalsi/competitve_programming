#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        string num;
        int inLen = num.size();
        string k;
        int n;
        cin>> n >> k;
        cin >> num;
        if(k == "0"){
            num.insert(num.size(), k);
            cout<<num<<endl;
            continue;
        }
        bool flag = false;
        for(int i=0; i<n; i++){
            if(num[i]<k[0]){
                flag = true;
                num.insert(i, k);
                break;
            }
            if(num[i]==k[0]){
                if(i==num.size()-1){
                    flag = true;
                     num.insert(i, k);
                     break;
                }
                else if(num[i+1]<k[0]) {
                    flag = true;
                    num.insert(i, k);
                    break;
                }
            }
        }
        if(!flag){
             num = num + k;
        }
        cout<<num<<endl;
    }
    return 0;
}