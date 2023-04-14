#include<bits/stdc++.h>
using namespace std;
static bool cmp(pair<int, int> a, pair<int, int> b){
    return a.second < b.second;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, s1, s2;
        cin>>n>>s1>>s2;
        vector<pair<int, int>> v;
        for(int i=0; i<n; i++){
            int num;
            cin>>num;
            v.push_back(make_pair(i+1, num));
        }
        sort(v.begin(), v.end(), cmp);
        vector<int> a, b;
        int i1 = 0, i2 = 0;
        for(int i = v.size()-1; i>=0; i--){
            if(s1*(i1+1)<=s2*(i2+1)){
                a.push_back(v[i].first);
                i1++;
            }
            else{
                b.push_back(v[i].first);
                i2++;
            }
        }
        cout<<a.size()<<" ";
        if(a.size()>0){
            for(int i=0; i<a.size(); i++){
                cout<<a[i]<<" ";
            }
        }
        cout<<endl<<b.size()<<" ";
        if(b.size()>0){
            for(int i=0; i<b.size(); i++){
                cout<<b[i]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}


