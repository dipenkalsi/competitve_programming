#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int diff = 0;
        int bit = 0;
        int target;
        int sum = 0;
        bool flag = false;
        map<int, int> mpp;
        vector<int> ans(n);
        for(int i=0; i<n; i++){
            if(bit%2==0) target = diff;
            else target = n-1-diff;
            for(int j=1; j<=n; j++){
                if(j==n && ((sum+j)%n != target)) flag = true;
                if(mpp[j]) continue;
                if((sum+j)%n == target){
                    mpp[j] = 1;
                    ans[i] = j;
                    sum+=j;
                    break;
                }
            }
            if(flag){
                break;
            }
            if(bit%2==1) diff++;
            bit++;
        }
        if(flag) cout<<"-1"<<endl;
        else{
            for(int i=0; i<n; i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}