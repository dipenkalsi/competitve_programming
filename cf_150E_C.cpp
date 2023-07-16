#include<bits/stdc++.h>
using namespace std;
long long getScore(string s){
    map<char, int> mpp;
    int val = 1;
    for(char c='A'; c<='E'; c++){
        mpp[c] = val;
        val*=10;
    }
    vector<int> v(5);
        int total = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='A') v[0] = i;
            if(s[i]=='B') v[1] = i;
            if(s[i]=='C') v[2] = i;
            if(s[i]=='D') v[3] = i;
            if(s[i]=='E') v[4] = i;
        }
        for(int i=0; i<s.size(); i++){
            if(s[i]=='A'){
                int temp = total;
                for(int j=1; j<5; j++){
                    if(v[j]>i){
                        total-= mpp[s[i]];
                        break;
                    }
                }
                if(temp==total) total += mpp[s[i]];
            }
            else if(s[i]=='B'){
                int temp = total;
                for(int j=2; j<5; j++){
                    if(v[j]>i){
                        total-= mpp[s[i]];
                        break;
                    }
                }
                if(temp==total) total += mpp[s[i]];
            }
            else if(s[i]=='C'){
                int temp = total;
                for(int j=3; j<5; j++){
                    if(v[j]>i){
                        total-= mpp[s[i]];
                        break;
                    }
                }
                if(temp==total) total += mpp[s[i]];
            }
            else if(s[i]=='D'){
                int temp = total;
                for(int j=4; j<5; j++){
                    if(v[j]>i){
                        total-= mpp[s[i]];
                        break;
                    }
                }
                if(temp==total) total += mpp[s[i]];
            }
            else if(s[i]=='E'){    
                total += mpp[s[i]];
            }
        }
        return total;
}
int main(){
    int t;
    cin>>t;
    map<char, int> mpp;
    int val = 1;
    for(char c='A'; c<='E'; c++){
        mpp[c] = val;
        val*=10;
    }
    while(t--){
        string s;
        cin>>s;
        long long ans;
        ans = getScore(s);
        for(int i=0; i<s.size(); i++){
            string str = s;
            str[i] = 'A';
            ans = max(ans, getScore(str));
            str[i] = 'B';
            ans = max(ans, getScore(str));
            str[i] = 'C';
            ans = max(ans, getScore(str));
            str[i] = 'D';
            ans = max(ans, getScore(str));
            str[i] = 'E';
            ans = max(ans, getScore(str));
        }
        cout<<ans<<endl;
    }
    return 0;
}