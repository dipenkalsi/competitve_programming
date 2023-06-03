#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n;
        cin>>s;
        int streak = 0;
        int c = 1;
        for(int i=1; i<n; i++){
            if(s[i] == s[i-1]) c++;
            else{
                streak = max(streak,c);
                c = 1;
            }
        }
        streak = max(streak,c);
        cout<<streak + 1<<endl;
    }
    return 0;
}