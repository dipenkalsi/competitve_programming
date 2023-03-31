// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
 int minimumCardPickup(vector<int>& cards) {
        map<int, int> mpp;
        int mini = 1e9;
        for(int i=0;i<cards.size();i++){
            if(mpp[cards[i]] != NULL){
                 mini = min(i - mpp[cards[i]] + 1, mini);
                 mpp[cards[i]] = i;
            }
            else mpp[cards[i]] = i;
            cout<<mpp[cards[i]]<<", "<<mini<<endl;
        }
        return mini<1e9?mini:-1;
    }
int main() {
    vector<int> v = {0,0};
    cout<<minimumCardPickup(v);
    

    return 0;
}