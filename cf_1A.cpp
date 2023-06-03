#include<bits/stdc++.h>
using namespace std;
 
int main(){
    
        int m, n, a;
        cin >> n>>m>>a;
        int mul1, mul2;
        if(m%a == 0) mul1 = m/a;
        else mul1 = m/a + 1;
        if(n%a == 0) mul2 = n/a;
        else mul2 = n/a + 1;
        cout<<mul1*mul2<<endl;
 
    return 0;
}