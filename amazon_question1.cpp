#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>& arr, int m){
    sort(arr.begin(), arr.end());
    int ans = INT_MAX;
    for(int i=0; i<arr.size() - m + 1; i++){
        int high = i + m - 1;
        ans = min(ans, arr[high] - arr[i]);
    }
    return ans;
}
int main(){
    // arr = {2, 3, 4, 7, 9, 12, 56}
    // 1.) sort the array.
    // 2.) Take a sliding window of length m
    // 3.) Iterate through the array using the sliding window and calculate the difference betweeen the max and the min element for each iteration.
    // 4.) minimize greedily.
    vector<int> arr = {7, 3, 2, 4, 9, 12, 56};
    int m = 4;
    cout<<solve(arr, m)<<endl;
    return 0;
}