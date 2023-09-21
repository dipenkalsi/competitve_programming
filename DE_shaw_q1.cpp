#include<bits/stdc++.h>
using namespace std;

int f(int i, int prev, int score, int target, vector<int>& heights, vector<int>& points, int n){
    if(i==n-1){
        if(score>=target) return 2;
        if(score+points[i]>=target) return 1;
        return 0;
    }
    int res = 0;
    for(int j=i+1; j<n; j++){
        if(heights[j]>=prev){
            res+=f(j, prev, score, target, heights, points, n);
            break;
        }
    }
    for(int j=i+1; j<n; j++){
        if(j==n-1) res+=f(j, 0, score+points[i], target, heights, points, n);
        if(heights[j]>=heights[i]){
            res+=f(j, heights[i], score+points[i], target, heights, points, n);
            break;
        }
    }
    return res;
}
int main(){
    int target = 6;
    vector<int> heights = {2, 4, 4, 3}, points = {2, 3, 3, 4};
    cout<<f(0, -1, 0, target, heights, points, heights.size());
    return 0;
}