#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>& array, int l, int u){
    vector<long long> arr(array.size());
    for(int i = 0; i < array.size(); i++) arr[i] = (long long)array[i];
    int ans = u-l+1;
    long long num;
    long long firstEl = 0;
    for(int i=0; i<arr.size(); i++){
        if(arr[i]!=0){
            firstEl = arr[i];
            break;
        } 
    }
    if(firstEl==0) return ans;
    if(firstEl<0) num = (long long) u;
    else num = (long long) l;
    for(int i=0; i<arr.size(); i++){
        num-=arr[i];
        if(num > u){
            ans-=abs(arr[i]);
            num = u;
        }
        if(num < l){
            ans-=abs(arr[i]);
            num = l;
        }
        if(ans<=0) return 0;
    }
    return ans;
}
int main(){
    vector<int> v = {-1, -3, 2};
    cout<<solve(v, 2, 8);
    return 0;
}