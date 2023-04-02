#include<bits/stdc++.h>
using namespace std;
bool f(int i, int t, int spells,  vector<int>&v ,vector<vector<int>>&dp){
    if(dp[i][0])
    if(i==t){
        return  dp[i] = true;
    } 
    else if(spells>40 || i>t) return dp[i] = false;
    bool a =false, b = false;
    if(a = f(2*i + 1, t, spells + 1, v, dp)){
        v.push_back(2);
    }
    if(i!=1){
        if(b = f(2*i - 1, t, spells + 1, v, dp)){
            v.push_back(1);
        }
    }
    if(i==1) return a;
    else return a || b;
}
int main(){
    int n ;
    cin >> n;
    for(int i=0; i<n; i++){
        int num;
        cin >> num;
        vector<int> v;
        vector<vector<int>> dp;
        bool ans = f(1, num, 0, v, dp);
        reverse(v.begin(), v.end());
        if(ans){
            cout<<v.size()<<endl;
            for(int j=0; j<v.size(); j++){
                cout<<v[j]<<" ";
            }
            cout<<endl;
        }
        else cout<<-1<<endl;
    }
    return 0;
}