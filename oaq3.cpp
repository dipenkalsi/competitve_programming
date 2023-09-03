#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n = 12;
    string s = "064819848398";
    vector<string> v = {"088", "364", "07"};
    map<vector<int>, int> mpp;
    // store the vector containing the frequencies of each string against it's index in a map.
    for(int i=0; i<v.size(); i++){
        vector<int> chars(10, 0);
        for(int j=0; j<v[i].size(); j++){
            chars[v[i][j]-'0']++;
        }
        mpp[chars] = i;
    }
    
    // iterate through the special string 's' and at each character update the frequency of the characters in s
    // look if there's a string in the vector 'v' which can now be formed.

    vector<int> ans(v.size(), -1);  // initially every index is -1 so that we don't have to update later.
    vector<int> specialChars(10, 0);
    for(int i=0; i<s.size(); i++){
        specialChars[s[i]-'0']++;
        if(mpp[specialChars]){
            ans[mpp[specialChars]] = i+1;
            mpp.erase(specialChars);
        }
    }
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}