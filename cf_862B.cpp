#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>> t;
    while(t--){
        int n ;
        cin >> n;
        string s;
        cin>> s;
        int index;
        char mini = CHAR_MAX;
        for(int i=1;i<n;i++){
            if(s[i]<=mini) index = i;
            mini = min(mini, s[i]);
        }
        if(mini<=s[0]){
            s.erase(index, 1);
            string c(1, mini);
            s = c + s;
        }
        cout<<s<<endl;
    }
    return 0;
}