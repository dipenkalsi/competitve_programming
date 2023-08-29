#include<bits/stdc++.h>
using namespace std;
vector<long long> check(vector<long long>& nums){
        vector<long long> ans;
        if(nums.size()==1){
            ans.push_back(nums[0]);
            return ans;
        }
        
        long long sum = 0;
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i+1] >= nums[i]){
                if(i==nums.size()-2){
                    sum+=nums[i] + nums[i+1];
                    ans.push_back(sum);
                }
                sum+=nums[i];
            }
            else{
                if(sum>0){
                    sum+=nums[i];
                    ans.push_back(sum);
                    sum = 0;
                }
                else ans.push_back(nums[i]);
            }
        }
        return ans;
    }
int main(){
    vector<int> v = {2, 34, 54, 67, 88, 90, 110};
    cout<<upper_bound(v.begin(), v.end(), 90) - v.begin()<<endl;
    // vector<long long> v = {5, 3, 3};
    // vector<long long> ans = check(v);
    // for(auto it: ans) cout<<it<<" ";

    return 0;
}