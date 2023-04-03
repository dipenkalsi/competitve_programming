#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n, streak = 1, ans = 0;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
        if(i>=1){
            if(v[i]>v[i-1]) streak++;
            else {
                ans = max(ans, streak);
                streak = 1;
            }
        }
    }
    ans = max(streak, ans);
    cout<<ans<<endl;
    return 0;
}