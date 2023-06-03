#include<bits/stdc++.h>
using namespace std;
int f(int ptr1, int ptr2, string& s1, string& s2, vector<vector<int>> &dp){
    if(dp[ptr1][ptr2]!=-1e9) return dp[ptr1][ptr2];
    if(ptr1==s1.size() || ptr2==s2.size()) return dp[ptr1][ptr2] = 0;
    if(s1[ptr1]==s2[ptr2]) return dp[ptr1][ptr2] =  1 + f(ptr1+1, ptr2+1, s1, s2,dp);
    else return dp[ptr1][ptr2] = max(f(ptr1, ptr2+1, s1, s2,dp), f(ptr1+1, ptr2, s1, s2, dp));
}
int main(){
    string string1 = "Hello this is Testing";
    string string2 =  "Testing";
    vector<vector<int>> dp(string1.size()+1, vector<int>(string2.size()+1, -1e9));
    cout<<f(0, 0, string1, string2, dp)<<endl;
    return 0;
}