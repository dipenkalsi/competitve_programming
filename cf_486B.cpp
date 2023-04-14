#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int m, n;
    cin >> m >> n;
    bool flag = false;
    vector<vector<int>> arr(m ,vector<int>(n, 23));
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            int num;
            if(arr[i][j]!=23){
                cin>>num;
                continue;
            }
            cin >> arr[i][j];
            if(arr[i][j]==0){
                for(int k=0; k<m; k++){
                    arr[k][j] = 0;
                }
                for(int k=0; k<n; k++){
                    arr[i][k] = 0;
                }
            }
            else{
                flag = true;
            }
        }
    }
    bool flag2 = true;
    for(auto it: arr){
        if(find(it.begin(), it.end(), 1)!=it.end()){
            flag2 = false;
            break;
        }
    }
    if(flag2 && !flag) cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        for(auto it: arr){
            for(auto it2:it){
                cout<<it2<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}