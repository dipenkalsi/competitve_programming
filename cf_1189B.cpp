#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    int last = v[v.size()-1];
    v.pop_back();
    bool flag = false;
    for(int i=v.size()-1; i>=1; i--){
        if(v[i] + v[i-1] > last){
            flag = true;
            v.insert(v.begin()+i, last);
            break;
        }
    }
    if(!flag) cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        for(int i=0; i<v.size(); i++){
            cout<<v[i]<<" ";
        }
    }
    return 0;
}