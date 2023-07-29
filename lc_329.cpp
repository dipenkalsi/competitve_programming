#include<bits/stdc++.h>
using namespace std;
    int f(int i, int j, vector<vector<int>>& matrix, vector<vector<int>>& dp){
        if(dp[i][j]!=-1) return dp[i][j];
        int res = 1;
        if(i-1>=0 && matrix[i-1][j] > matrix[i][j]) res = max(res, 1 + f(i-1, j, matrix, dp));
        if(j-1>=0 && matrix[i][j-1] > matrix[i][j]) res = max(res, 1 + f(i, j-1, matrix, dp));
        if(i+1<matrix.size() && matrix[i+1][j] > matrix[i][j]) res = max(res, 1 + f(i+1, j, matrix, dp));
        if(j+1<matrix[0].size() && matrix[i][j+1] > matrix[i][j]) res = max(res, 1 + f(i, j+1, matrix, dp));
        return dp[i][j] = res;
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int ans = 0;
        int n = matrix.size(), m = matrix[0].size();
        vector<vector<int>> dp(n, vector<int>(m, -1));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                ans = max(ans, f(i, j, matrix, dp));
            }
        }
        return ans;
    }
int main(){
    int m, n;
    cin>>n>>m;
    vector<vector<int>> v(n, vector<int>(m, 0));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>v[i][j];
        }
    }
    cout<<longestIncreasingPath(v)<<endl;
    return 0;
}