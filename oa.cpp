#include<bits/stdc++.h>
using namespace std;
int solve(string s){
    map<char, int> mpp;
    map<char, int> mpp2;
    for(int i=0; i<s.size(); i++){
        mpp[s[i]]++;
        int heighest = 0;
        vector<int> chars;
        for(auto it: mpp){
            if(it.second == heighest) chars.push_back(it.first);
            if(it.second > heighest){
                heighest = it.second;
                chars.clear();
                chars.push_back(it.first);
            }
        }
        for(auto it: chars){
            mpp2[it]++;
        }
        chars.clear();
    }
    int heighest = 0;
    for(auto it: mpp2){
        heighest = max(heighest, it.second);
    }
    return heighest;
}
int main(){
    string s;
    cin>>s;
    cout<<solve(s);
    return 0;
}