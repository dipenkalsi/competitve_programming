#include <bits/stdc++.h> 
using namespace std;
void find(int n, map<int, int>& facs){
    if(n<=1) return;
    for(int i=2; i<n; i++){
        if(n%i==0){
            facs[i]++;
            find(n/i, facs);
        }
    }
}
int digitProduct(int n, vector<int> &coins)
{
    map<int, int> facs;
    find(n, facs);
    string s = "";
    for(auto it: facs){
        string k = to_string(pow(it.first, it.second));
        s+=k;
    }
    return stoi(s);
}
int main(){
    int ans = digitProduct()
    return 0;
}