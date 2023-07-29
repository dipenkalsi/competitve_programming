#include<bits/stdc++.h>
using namespace std;
int f(int i, int last, vector<int>& arr, int x, vector<vector<int>>& dp){
    if(i==arr.size()) return dp[i][last%2] = 0;
    if(dp[i][last%2]!=-1e7) return dp[i][last%2];
    int pick, notPick;
    if(last%2==arr[i]%2 || last==-1e9){
         pick = arr[i] + f(i+1, arr[i], arr, x, dp);
    }
    else pick = arr[i] - x + f(i+1, arr[i], arr, x, dp);
    notPick = f(i+1, last, arr, x, dp);
    return dp[i][last%2] = max(pick, notPick);
}
int solve(vector<int>& arr, int x){
    vector<vector<int>> dp(arr.size()+1, vector<int>(2, -1e7));
    return f(0, -1e9, arr, x, dp);
}
int main(){
    vector<int> v{2,3,6,1,9,2};
    cout<<solve(v, 5);
    return 0;
}