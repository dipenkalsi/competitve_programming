#include<bits/stdc++.h>
using namespace std;
// given a string s consisting of characters 'a' , 'b', and 'c'. Return the number of subsequences having i a's, j b's and k c's. Where i>=1, j>=1, and k>=1.
// Two subsequences are considered different if the indices you pick are different.
int f(int i, set<int>& hash, string& s){
    if(i==s.size()){
        // check whether or not the chosen subsequence satisfies the given condition.
        if(hash.size()==3) return 1;
        return 0;
    }
    // pick
    set<int> st = hash;
    hash.insert(s[i]);
    int pick = f(i+1, hash, s);
    // not pick
    int notPick = f(i+1, st, s);
    return pick + notPick;
}
int main(){
    string s = "abbaabbc";
    set<int> hash;
    cout<<f(0, hash, s);
    return 0;
}