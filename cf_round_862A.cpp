#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n ;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin>> arr[i];
        }
        int flag = 0;

        for(int x = 0; x<pow(2, 8); x++){
            int sum = arr[0] ^ x;
            for(int i = 1; i < n; i++){
                sum  = sum ^(arr[i] ^ x);
            }
            if(sum == 0){
                cout<<x<<endl;
                flag = 1;
                break;
            }
            else sum = 0;
        }
        if(!flag) cout<<-1<<endl;
    }
    return 0;
}