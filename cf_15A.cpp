#include<bits/stdc++.h>
using namespace std;
 
int main(){
        int n;
        cin>>n;
        vector<int> v(n);
        int streak = 1, ans = 0;
        for(int i=0; i<n; i++){
            cin>>v[i];
            if(i>0){
                if(v[i]>v[i-1]){
                    streak++;
                }
                else{
                    ans = max(ans, streak);
                    streak = 1;
                }
            }
        }
        ans = max(ans, streak);
        cout<<ans<<endl;
    return 0;
}