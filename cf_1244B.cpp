#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        if(s=="1"){
            cout<<"2"<<endl;
            continue;
        }
        if(s=="0"){
            cout<<"1"<<endl;
            continue;
        }
        int lastOne = 0, firstOne = n;
        bool isFirstOneSet = false;
        for(int i=0; i<s.size(); i++){
            if(s[i] == '1'){
                if(!isFirstOneSet){
                    firstOne = i;
                    isFirstOneSet = true;
                }
                lastOne = i;
            }
        }

        cout<<max(n, max((lastOne+1)*2, (n-firstOne)*2))<<endl;
    }
    return 0;
}