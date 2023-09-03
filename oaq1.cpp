#include<bits/stdc++.h>
using namespace std;
int f(int i, vector<int>& stocks, int lastDay, vector<vector<int>>& dp){
    if(lastDay!=-1 && dp[i][lastDay]!=-1) return dp[i][lastDay];
    if(i==stocks.size()){
        if(lastDay==-1) return 0;
        return dp[i][lastDay] = 0;
    }
    int pick = -1e9, notPick = -1e9;
    if(lastDay==-1 || (stocks[i] - stocks[lastDay] == i-lastDay)){
        int temp1 = i;
        pick = stocks[i] + f(i+1, stocks, temp1, dp);
    }
    notPick = f(i+1, stocks, lastDay, dp);
    return dp[i][lastDay] = max(pick, notPick); 
}
int main(){
    vector<int> v = {1, 5, 3, 7, 8};
    vector<vector<int>> dp(v.size()+1, vector<int>(v.size()+1, -1));
    cout<<f(0, v, -1, dp)<<endl;
    return 0;
}