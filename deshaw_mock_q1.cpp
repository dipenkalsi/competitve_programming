#include<bits/stdc++.h>
using namespace std;
//chocolate shop
int main(){
    string s = "abbabb";
    string temp = "",temp2 = "";
    int ans = 0;
    for(int i=0; i<s.size(); i++){
        temp.push_back(s[i]);
        for(int j=i+1; j<s.size(); j++){
            temp2.push_back(s[j]);
            if(temp==temp2){
                ans++;
                cout<<j<<endl;
                temp = "";
                temp2 = "";
                break;
            }
            if(temp2.size()>temp.size()){
                temp2 = "";
                break;
            }
        }
    }
    if(temp.size()>0) ans++;
    cout<<ans<<endl;
    return 0;
}