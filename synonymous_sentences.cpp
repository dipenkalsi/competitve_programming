#include<bits/stdc++.h>
using namespace std;
void f(int ind, vector<string>& tokens, vector<vector<string>>& synonyms, vector<vector<string>>& res, map<vector<string>, int>& mpp){
    if(ind==tokens.size()) return;
    if(!mpp[tokens]){
        res.push_back(tokens);
        mpp[tokens] = 1;
    } 
    for(int i=0; i<synonyms.size(); i++){
        if(find(synonyms[i].begin(), synonyms[i].end(), tokens[ind])!=synonyms[i].end()){
            for(auto it: synonyms[i]){
                if(it!=tokens[ind]){
                    vector<string> temp = tokens;
                    temp[ind] = it;
                    f(ind+1, temp, synonyms, res, mpp);
                }
            }
        }
    }
    f(ind+1, tokens, synonyms, res, mpp);
}
vector<string> solve(vector<vector<string>>& synonyms, string text){
    //generating a vector of words from the given sentence.
    vector<string> tokens;
    stringstream check1(text);
    string intermediate;
     
    while(getline(check1, intermediate, ' '))
    {
        tokens.push_back(intermediate);
    }

    //merging the synonyms
    map<string, int> mpp2;
    for(int i=0; i<synonyms.size(); i++){
        if(mpp2[synonyms[i][0]]){
            synonyms[mpp2[synonyms[i][0]]].push_back(synonyms[i][1]);
            synonyms.erase(synonyms.begin()+i);
            i--;
        }
        if(mpp2[synonyms[i][1]]){
            synonyms[mpp2[synonyms[i][1]]].push_back(synonyms[i][0]);
            synonyms.erase(synonyms.begin()+i);
            i--;
        }
        else{
            mpp2[synonyms[i][0]] = i;
            mpp2[synonyms[i][1]] = i;
        }
    }

    // replacing all possible synonyms for all possible words in the sentence
    vector<string> res;
    vector<vector<string>> temp;
    map<vector<string>, int> mpp;
    f(0, tokens, synonyms, temp, mpp);
    for(auto it: temp){
        string s = "";
        for(auto it2: it){
            s+=it2 + " ";
        }
        s.pop_back();
        res.push_back(s);
    }
    return res;
}
int main(){
    vector<vector<string>> synonyms = {
        {"happy","joy"}, {"sad","sorrow"}, {"joy","cheerful"}
    };
    string text = "I am happy today but was sad yesterday";
    
    vector<string> ans = solve(synonyms, text);
    for(auto it: ans) cout<<it<<endl;
    return 0;
}