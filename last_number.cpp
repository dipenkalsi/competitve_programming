#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int num;
        cin>>num;
        vector<int> v(num);
        for(int i=0;i<n;i++){
            v.push_back(i+1);
        }
        for(int i=0;i<n-1;i++){
            int a = v[num-1] - v[0];
            cout<<"a is "<<a<<endl;
            v.erase(v.begin()+0); 
            v.erase(v.begin()+num-1);
            v.push_back(a);
            sort(v.begin(), v.end());
        }
        cout<<v[0]<<endl;
    }
    return 0;
}