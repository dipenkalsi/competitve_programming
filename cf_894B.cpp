#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> ans;
        for(int i=0; i<n; i++){
            int k;
            cin>>k;
            if(ans.size()==0) ans.push_back(k);
            else if(k>=ans[ans.size()-1]) ans.push_back(k);
            else{
                ans.push_back(k);
                ans.push_back(k);
            }
        }
        for(auto it: ans) cout<<it<<" ";
        cout<<endl;
    }
    return 0;
}