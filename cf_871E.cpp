#include<bits/stdc++.h>
using namespace std;
int dfs(int i, int j, vector<vector<int>>& grid, vector<vector<int>>& vis){
    if(i<0 || j<0 || j>=grid[0].size()||i>=grid.size()) return 0;
    if(grid[i][j]==0 || vis[i][j]) return 0;
    vis[i][j] = 1;
    int res = grid[i][j];
    res += dfs(i+1, j, grid, vis);
    res += dfs(i, j+1, grid, vis);
    res += dfs(i-1, j, grid, vis);
    res += dfs(i, j-1, grid, vis);
    return res;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m, ans = 0;
        cin>>n>>m;
        vector<vector<int>> grid(n, vector<int>(m));
        vector<vector<int>> vis(n, vector<int>(m, 0));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>grid[i][j];
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j]>0 && !vis[i][j]){
                    int temp = dfs(i, j, grid, vis);
                    ans = max(ans, temp);
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}