#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        vector<int> w(n), b(n);
        for(int i=0; i<n; i++){
            cin>>w[i];
        }
        for(int i=0; i<n; i++){
            cin>>b[i];
        }
        vector<int> sw = w;
        sort(sw.begin(), sw.end());
        sort(b.begin(), b.end());
        for(int i=0; i<n; i++){
            int ind = find(sw.begin(), sw.end(), w[i]) - sw.begin();
            cout<<b[ind]<<" ";
            sw.erase(sw.begin()+ind);
            b.erase(b.begin()+ind);
        }
        cout<<endl;
    }
    return 0;
}