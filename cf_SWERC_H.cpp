#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v1(n);
        vector<int> v2(n);
        for(int i=0; i<n; i++) cin>>v1[i];
        for(int i=0; i<n; i++) cin>>v2[i];
        int ind = n;
        int ans = 0;
        for(int i=n-1; i>=0; i--){
            int temp = find(v1.begin(), v1.end(), v2[i]) - v1.begin();
            if(temp<ind){
                ind = temp;
                ans++;
            }
            else break;
        }
        cout<<n-ans<<endl;
    }
    return 0;
}