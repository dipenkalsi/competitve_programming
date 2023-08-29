#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string temp = s;
        while(1){
            temp = s;
            int mini = s.size();
            for(int i=s.size()-1; i>=0; i--){
                if(s[i]>='5') mini = i;
            }
            if(mini==s.size()){  
                break;
            }
            if(mini == 0){
                string ans = "1";
                for(int i=0; i<s.size(); i++){
                    ans+="0";
                }
                s = ans;
            }
            else{
                s[mini-1]++;
                for(int i=mini; i<s.size(); i++){
                    s[i] = '0';
                }
                
            }
            if(temp==s) break;
        }
                
        cout<<s<<endl;
    }
    return 0;
}