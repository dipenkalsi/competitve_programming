#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++) cin>>v[i];
        vector<pair<int, int>> ans;
        if(n%2==1){
            cout<<"-1"<<endl;
            continue;
        }
        else{
            for(int i=0; i<n-1; i++){
                if((v[i]==v[i+1])){
                    ans.push_back({i, i+1});
                    i++;
                }
                else{
                    ans.push_back({i, i});
                    ans.push_back({i+1, i+1});
                    i++;
                }
            }
            cout<<ans.size()<<endl;
            for(int i=0; i<ans.size(); i++){
                cout<<ans[i].first+1<<" "<<ans[i].second+1<<endl;
            }
        }
    }
    return 0;
}