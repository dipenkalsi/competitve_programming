#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int>& a, pair<int, int>& b){
    if(a.first==b.first) return a.second<=b.second;
    else return a.first > b.first;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m, h;
        int rProbs, rPenal;
        vector<pair<int, int>> score;
        cin>>n>>m>>h;
        vector<vector<int>> v(n, vector<int>(m));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>v[i][j];
            }
            sort(v[i].begin(), v[i].end());
            int probs = 0, penal = 0;
            int time = 0;
            vector<int> ps(m, 0);
            for(int j=0; j<m; j++){
                if(time + v[i][j] <= h){
                    time+=v[i][j];
                    probs++;
                    if(j==0) ps[i] = v[i][j];
                    else ps[j] = ps[j-1] + v[i][j];
                    penal+=ps[j];
                }
                else break;
            }
            score.push_back({probs, penal});
            if(i==0){
                rProbs = probs;
                rPenal = penal;
            } 
        }
        sort(score.begin(), score.end(), cmp);
        int ans = 1;
        for(int i=0; i<n; i++){
            if(score[i].first==rProbs && score[i].second==rPenal) break;
            else ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}