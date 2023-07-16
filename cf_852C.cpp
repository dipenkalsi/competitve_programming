#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++) cin>>v[i];
        if(n<=2){
            cout<<"-1"<<endl;
            continue;
        }
        int left=0, right=n-1;
        int ans1=-1, ans2=-1;
        int mini = 1, maxi = n;
        while(left<right){
            if(v[left]==mini){
                left++;
                mini++;
                continue;
            }
            else if(v[left]==maxi){
                maxi--;
                left++;
                continue;
            }
            if(v[right]==mini){
                mini++;
                right--;
                continue;
            }
            else if(v[right]==maxi){
                maxi--;
                right--;
                continue;
            }
            else{
                ans1 = left+1;
                ans2 = right+1;
                break;
            }
        }
        if(ans1!=-1 && ans2!=-1){
            cout<<ans1<<" "<<ans2<<endl;
        }
        else cout<<"-1"<<endl;
    }
    return 0;
}