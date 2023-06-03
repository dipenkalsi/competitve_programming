#include<bits/stdc++.h>
using namespace std;
 
int main(){
    double h, l;
    cin>>h>>l;
    double ans = (l*l - h*h)/(2*h);
    cout<<setprecision(15)<<ans<<endl;
    return 0;
}