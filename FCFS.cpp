#include<bits/stdc++.h>
using namespace std;
    vector<int> findShortestPath(int src, int parent, vector<int>& vis, vector<vector<int>>& graph){
        vector<int> res;
        res.push_back(src);
        vis[src] = 1;

        bool flag2 = false;
        for(auto it: graph[src]){
            if(!vis[it]){
                vector<int> temp = findShortestPath(it, src, vis, graph);
                temp.insert(temp.begin(), src);
                if(!flag2){
                    flag2 = true;
                    res = temp;
                }
                else{
                    if(temp.size()<res.size()){
                        res = temp;
                    }
                }
            }
            
        }

        bool flag = false;
        for(auto it: vis) if(!it){
            flag = true;
            break;
        }
        if(!flag) return res;
        else{
            res.push_back(parent);
            return res;
        }
    }
    vector<int> shortestPathLength(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> ans;
        for(int i=0; i<n; i++){
            vector<int> vis(n, 0);
            vector<int> temp = findShortestPath(i, -1, vis, graph);
            if(i==0) ans = temp;
            else{
                if(ans.size()>temp.size()) ans = temp;
            }
        }
        return ans;
    }

int main(){
	vector<vector<int>> graph = {{1, 2, 3}, {0}, {0},{ 0}};
	vector<int> ans = shortestPathLength(graph);
	for(auto it: ans) cout<<it<<" ";
	return 0;
}