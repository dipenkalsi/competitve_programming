#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        string s; cin >> s; s += s;
        int k = 0, z = 0;
        for (char c : s) {
            z = c == '1' ? z+1 : 0;
            k = max(k, z);
        }
        const int n = s.size() / 2;

        if (k > n) {
            cout << (long long)n*n << '\n';
        } else {
            const ll side_a = (k+1)/2;
            const ll side_b = (k+2)/2;
            cout << side_a * side_b << '\n';
        }
    }
    return 0;
}