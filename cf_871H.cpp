#include<bits/stdc++.h>
using namespace std;
string decToBinary(int n)
{
    string s = "";
    // Size of an integer is assumed to be 32 bits
    for (int i = 31; i >= 0; i--) {

        int k = n >> i;
        if (k & 1)
            s+="1";
        else
            s+="0";
    }
    return s;
}
int f(int i, int k , string s,  vector<int>& v){
    if(i==v.size()) return 0;
    int include = compare(s, decToBinary(v[i]));
    int notInclude = f(i+1, k, s, v);
    return include + notInclude;
}
int main(){
    int mod = 1000000007;
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int ans = 0;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        string s;
        for(int i=0; i<n; i++){
            s = decToBinary(v[i]);
            ans += f(i, k, s, v);
        }
        cout<<ans;
    }
    return 0;
}