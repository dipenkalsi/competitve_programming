#include<bits/stdc++.h>
using namespace std;
void dfs(int i, int j, vector<vector<int>>& v, vector<vector<int>>& ans){
    //check the base cases
    if(i<0 || j<0 || i==v.size() || j==v[0].size() || v[i][j]==0 || ans[i][j]==1) return;
    ans[i][j] = 1;
    dfs(i+1, j, v, ans);
    dfs(i, j+1, v, ans);
    dfs(i-1, j, v, ans);
    dfs(i, j-1, v, ans);
}
int main(){
    vector<vector<int>> v = {
        {1, 0, 0, 0, 0, 0},
        {0, 1, 0, 1, 1, 1},
        {0, 0, 1, 0, 1, 0},
        {1, 1, 0, 0, 1, 0},
        {1, 0, 1, 1, 0, 0},
        {1, 0, 0, 0, 0, 1},
    };
    vector<vector<int>> ans(v.size(), vector<int>(v[0].size(), 0));
    for(int i=0; i<v.size(); i++){
        if(v[i][0]==1){
            dfs(i, 0, v, ans);
        }
    }
    for(int i=0; i<v.size(); i++){
        if(v[0][i]==1){
            dfs(0, i, v, ans);
        }
    }
    for(int i=0; i<v.size(); i++){
        if(v[i][v[0].size()-1]==1){
            dfs(i, v[0].size()-1, v, ans);
        }
    }
    for(int i=0; i<v.size(); i++){
        if(v[v.size()-1][i]==1){
            dfs(v.size()-1, i, v, ans);
        }
    }
    for(auto it: ans){
        for(auto it2: it){
            cout<<it2<<" ";
        }
        cout<<endl;
    }
    return 0;
}