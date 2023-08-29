#include<bits/stdc++.h>
using namespace std;
bool check(int mid, long long n){
    long long m = mid;
    if(m*(m+1)/2 <= n) return true;
    return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        int low = 2, high = 1e9;
        int ans = INT_MAX;
        while(low<=high){
            int mid = (low+high)/2;
            if(check(mid, n)){
                long long balls = mid;
                int rem = n-(balls*(balls+1)/2);
                if(rem%(n)==0){
                    balls+=rem/(n);
                    ans = min(ans, (int) balls);
                }
                low = mid+1;
            }
            else high = mid-1;
        }
        cout<<ans<<endl;
    }
    return 0;
}