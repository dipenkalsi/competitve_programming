#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int l;
        string s;
        cin>>l;
        cin>>s;
        vector<string> v;
        for(int i=0; i<l-1; i++){
            if(find(v.begin(), v.end(), s.substr(i, 2)) == v.end()) v.push_back(s.substr(i, 2));
        }
        cout<<v.size()<<endl;
    }
    return 0;
}