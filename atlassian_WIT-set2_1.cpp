#include<bits/stdc++.h>
using namespace std;
 
int solve(vector<string>& v){
    stack<char> s;
    for(auto it: v){
        if(it=="./") continue;
        else if(it=="../"){
            if(!s.empty()) s.pop();
        } 
        else{
            s.push(it[0]);
        }
    }
    return s.size();
}

int main(){
    vector<string> v = {"x/", "y/", "../", "z/", "./"};
    cout<<solve(v);
    return 0;
}