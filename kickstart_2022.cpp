#include<bits/stdc++.h>
using namespace std;
bool f(string p, string i, int ind){
    if(ind==p.size()) return false;
    string q = p;
    q.erase(ind, 1);
    if(q==i || p==i) return true;
    else return f(p, i, ind+1) || f(q, i, ind);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string i, p;
        cin>>i>>p;
        vector<string> v;
        if(f(p, i, 0)) cout<<p.size()- i.size()<<endl;
        else cout<<"IMPOSSIBLE"<<endl;
    }
    return 0;
}