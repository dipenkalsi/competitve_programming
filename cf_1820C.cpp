#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        vector<int> vis(n+1, 0);
        for(int i=0; i<n; i++){
            cin>>v[i];
            if(v[i]<=n) vis[v[i]] = 1;
        }
        if(v.size()==1 && v[0]==0) {
            cout<<"No"<<endl;
            continue;
        }
        if(v.size()==1 && v[0]!=0){
            cout<<"Yes"<<endl;
            continue;
        } 

        int mex = 0;
        for(int i=0; i<vis.size(); i++){
            if(vis[i]==0){
                mex = i;
                break;
            }
        }
        if(mex==0){
            cout<<"Yes"<<endl;
            continue;
        }
        if(mex>*max_element(v.begin(), v.end())){
            if(v.size()>*max_element(v.begin(), v.end())+1) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
        else{
            int el = mex+1;
            bool flag = false;
            bool flag2 = false;
            int first;
            for(int i=0; i<v.size(); i++){
                if(v[i]==el && !flag){
                    flag = true;
                    first = i;
                }
                else if(v[i]==el && flag){
                    flag2 = true;
                    for(int k = first; k<=i; k++){
                        v[k] = mex;
                    }
                    first = i;
                }
            }
            int mex2 = 0;
            while(1){
                if(find(v.begin(), v.end(), mex2)==v.end()){
                    break;
                }
                mex2++;
            }
            if(!flag){
                 cout<<"Yes"<<endl;
                 continue;
            }
            if(flag && !flag2){
                 cout<<"Yes"<<endl;
                 continue;
            }
            if(mex2==mex+1) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
    return 0;
}