#include<bits/stdc++.h>
using namespace std;
int f(int i, int last, vector<vector<int>>& A){
    if(i==A.size()) return 0;
    int ans = INT_MAX;
    for(int j=0; j<3; j++){
        if(j!=last){
            ans = min(ans, A[i][j] + f(i+1, j, A));
        }
    }
    return ans;
}
int solve(vector<vector<int> > &A) {
    return f(0, -1, A);
}
int main(){
    vector<vector<int>> v = {
        {1, 2, 3},
        {10, 11, 12}
    };
    cout<<solve(v);
    return 0;
}