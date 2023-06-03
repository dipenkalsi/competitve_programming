#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int streak = 1;
        map<int, int> mpp1, mpp2;
        int ans = INT_MIN;
        vector<int> v1(n), v2(n);
        for(int i=0; i<n; i++){
            cin>>v1[i];
            if(i>0){
                if(v1[i]==v1[i-1]){
                    streak++;
                }
                else{
                    if(!mpp1[v1[i-1]]) mpp1[v1[i-1]] = streak;
                    else mpp1[v1[i-1]] = max(mpp1[v1[i-1]], streak);
                    ans = max(ans, streak);
                    streak = 1;
                }
            }
        }
        ans = max(ans, streak);
        if(!mpp1[v1[n-1]]) mpp1[v1[n-1]] = streak;
        else mpp1[v1[n-1]] = max(mpp1[v1[n-1]], streak);

        streak = 1;

        for(int i=0; i<n; i++){
            cin>>v2[i];
            if(i>0){
                if(v2[i]==v2[i-1]){
                    streak++;
                }
                else{
                    if(!mpp2[v2[i-1]]) mpp2[v2[i-1]] = streak;
                    else mpp2[v2[i-1]] = max(mpp2[v2[i-1]], streak);
                    ans = max(ans, streak);
                    streak = 1;
                }
            }
        }
        ans = max(ans, streak);
        if(!mpp2[v2[n-1]]) mpp2[v2[n-1]] = streak;
        else mpp2[v2[n-1]] = max(mpp2[v2[n-1]], streak);

        for(auto it: mpp1){
            if(mpp2[it.first]){
                ans = max(ans, it.second +mpp2[it.first]);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}