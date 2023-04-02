#include<bits/stdc++.h>
using namespace std;
bool isp(vector<int>& v){
    for(int i=0;i<v.size();i++){
        if(v[i]==i+1) return true;
    }
    return false;
}
bool f(int i, vector<int>& v) {
    vector<int> temp;
    if(i==0){
        temp.push_back(v[0]);
        return isp(temp);
    }
    if(isp(v)) return true;
    bool pick = false, notPick = false;
    int el = v[i];
    pick = f(i-1, v);
    v.erase(v.begin() + i);
    notPick = f(i, v);
    return pick || notPick;
}
int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int len;
        cin >> len;
        vector<int>v(len);
        for(int i=0;i<len;i++){
            cin >> v[i];
        }
        if(isp(v)){
            cout<<"YES"<<endl;
            continue;
        }
        if(f(len-1, v)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}