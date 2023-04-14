#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        int x1, y1, x2, y2;
        cin>>x1>>y1>>x2>>y2;
        int ans1 = 4, ans2 = 4;
        if(x2==n || x2==1) ans1--;
        if(y2==m || y2==1) ans1--;
        if(x1==n || x1==1) ans2--;
        if(y1==m || y1==1) ans2--;
        cout<<min(ans1, ans2)<<endl;
    }
    return 0;
}