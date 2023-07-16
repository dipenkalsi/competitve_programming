#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string ans = "";
        vector<int> v;
        bool flag = false;
        for(int i=0; i<n; i++){
            int k;
            cin>>k;
            if(i==0){
                ans+="1";
                v.push_back(k);
            }
            else{
                if(k>=v[v.size()-1]){
                    if(flag){
                        if(k<=v[0]){
                            ans+="1";
                            v.push_back(k);
                        }
                        else ans+="0";
                    }
                    else{
                        ans+="1";
                        v.push_back(k);
                    }
                }
                else{
                    if(k<=v[0] && !flag){
                        flag = true;
                        ans+="1";
                        v.push_back(k);
                    }
                    else{
                        ans+="0";
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}