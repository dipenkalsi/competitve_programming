#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int slices = c*d;
    int salts = p/np;
    int drinks = l*k/nl;
    cout<<min(slices, min(salts, drinks))/n<<endl;
    return 0;
}