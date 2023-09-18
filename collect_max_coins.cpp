#include<bits/stdc++.h>
using namespace std;
long f(int i, int j, int time, vector<vector<int>>& coins, vector<vector<int>>& vis){
    if(i<0 || j<0 || i==coins.size() || j==coins[0].size() || vis[i][j]) return 0;
    vis[i][j] = 1;
    long res = time * coins[i][j];
    long temp = 0;
    temp = max(temp, f(i+1, j, time+1, coins, vis));
    temp = max(temp, f(i-1, j, time+1, coins, vis));
    temp = max(temp, f(i, j+1, time+1, coins, vis));
    temp = max(temp, f(i, j-1, time+1, coins, vis));
    vis[i][j] = 0;
    return res + temp;
}
long getMaxScore(vector<vector<int>>& coins){
    vector<vector<int>> vis(coins.size(), vector<int>(coins[0].size(), 0));
    return f(0, 0, 0, coins, vis);
}
int main(){
    vector<vector<int>> coins = {{2, 1, 2}, {3, 4, 5}};
    cout<<getMaxScore(coins);
    return 0;
}