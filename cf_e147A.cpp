#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n, x;
    cin>>n>>x;
    vector<int> ans;
    for(int i=n; i>=1; i--){
        if(i%x!=0){
            ans.push_back(i);
            n-=i;
            i=n+1;
        }
    }
    cout<<ans.size()<<endl;
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    }
    return 0;
}