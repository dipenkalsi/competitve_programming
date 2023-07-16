#include<bits/stdc++.h>
using namespace std;
int count(int k){
    if(k%2==0){
        return 1 + count(k/2);
    }
    else return 0;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int powers = 0;
        vector<int> nums;
        for(int i=0;i<n;i++){
            int k;
            cin>>k;
            powers+=count(k);
            nums.push_back(count(i+1));
        }
        if(powers>=n){
            cout<<"0"<<endl;
            continue;
        }
        bool flag = false;
        int diff = n - powers;
        int ans = 0;
        sort(nums.begin(), nums.end());
        for(int i=n-1; i>=0; i--){
            diff-=nums[i];
            ans++;
            if(diff<=0){
                flag = true;
                break;
            }
        }
        if(!flag) cout<<"-1"<<endl;
        else cout<<ans<<endl;
    }
    return 0;
}