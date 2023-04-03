#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
     cin >> t;
     while(t--){
        int n;
        cin>>n;
        int m = 2*n;
        vector<int> arr(m);
        for(int i = 0; i < m; i++){
            cin>> arr[i];
        }
        sort(arr.begin(), arr.end());
        cout<<abs(arr[n-1] - arr[n])<<endl;
     }
    return 0;
}