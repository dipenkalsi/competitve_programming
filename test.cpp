#include<bits/stdc++.h>
using namespace std;
int getMaxLen(vector<int>& nums) {
        vector<vector<int>> v;
        int ans = 0;
        vector<int> temp;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0){
                if(temp.size()>0) v.push_back(temp);
                temp.clear();
            }
            else temp.push_back(nums[i]);
        }
        if(v.size()==0 || v[v.size()-1]!=temp) v.push_back(temp);
        for(auto it: v){
            int cnt, first=-1, last;
            for(int i=0; i<it.size(); i++){
                if(it[i]<0){
                    cnt++;
                    if(first==-1) first= i;
                    last = i;
                }
            }
            if(cnt%2==0){
                ans = max(ans, (int)it.size());
            }
            else ans = max(ans, max((int)it.size()-first-1, last));
        }
        return ans;
    }
int main(){
    vector<int> v = {-16,0,-5,2,2,-13,11,8};
    cout<<getMaxLen(v);
    return 0;
}