#include<bits/stdc++.h>
using namespace std;
 
int main(){
    string line = "0002f7c22e7904|000176a3a4d214|000305d29f4a4b";
    vector <string> tokens, ans;
     
    // stringstream class check1
    stringstream check1(line);
     
    string intermediate;
     
    // Tokenizing w.r.t. space ' '
    while(getline(check1, intermediate, '|'))
    {
        tokens.push_back(intermediate);
    }

    sort(tokens.begin(), tokens.end());
    for(auto it: tokens){
        string str = it.substr(4);
        if(it.substr(0,4)=="0000" || str.size()!=10){
            ans.clear();
            ans.push_back("Invalid conguration");
            break;
        }
        for(auto it2:str){
            if((it2<'a' || it2>'z') && (it2<'0' || it2>'9')){
                ans.clear();
                ans.push_back("Invalid conguration");
                break;
            }
        }
        if(!ans.empty() && ans[ans.size()-1]=="Invalid conguration") break;
        ans.push_back(str);
    }
    for(auto it:ans) cout<<it<<endl;
    return 0;
}