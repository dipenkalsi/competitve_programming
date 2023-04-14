#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
     while(t--){
        int n, x1, y1, x2, y2;
        cin>> n>> x1 >> x2 >> y1 >> y2;
        int belt1 = max(abs(x1-(n/2)), abs(y1-(n/2)));
        int belt2 = max(abs(x2-(n/2)), abs(y2-(n/2)));
        cout<<" belt1 = "<<belt1<<", belt2 ="<<belt2<<endl;
        cout<<abs(belt1 - belt2)<<endl;
     }
    return 0;
}