#include<bits/stdc++.h>
using namespace std;
bool checkSubsequence(string s1, string s2){
    int n = s1.length(), m = s2.length();
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (s1[i] == s2[j])
            i++;
        j++;
    }
    return i == n;
}
bool check(int ind, string a, string b){
    if(checkSubsequence(b, a)) return true;
    if(a[ind]=='z') a[ind] == 'a';
    else a[ind]++;
    return check(ind+1, a, b);
}
vector<string> solve(vector<string>& v1, vector<string>& v2){
    vector<string> ans;
    for(int i=0; i<v1.size(); i++){
        if(check(0, v1[i], v2[i])) ans.push_back("YES");
        else ans.push_back("NO");
    }
}
int main(){
    int m, n;
    cin>>m;
    vector<string> v1(m);
    for(int i=0; i<m; i++){
        cin>>v1[i];
    }
    cin>>n;
    vector<string> v2(n);
    for(int i=0; i<n; i++){
        cin>>v2[i];
    }
    vector<string> ans = solve(v1, v2);
    for(auto it: ans) cout<<it<<endl;
    return 0;
}