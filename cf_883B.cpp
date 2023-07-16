#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<vector<char>> v(3, vector<char>(3));
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                cin>>v[i][j];
            }
        }
        vector<char> chars;
        for(int i=0; i<3; i++){
            int streak = 0;
            for(int j=1; j<3; j++){
                if(v[i][j]==v[i][j-1]) streak++;
                if(streak==2){
                    chars.push_back(v[i][j]);
                }
            }
        }
        for(int j=0; j<3; j++){
            int streak = 0;
            for(int i=1; i<3; i++){
                if(v[i][j]==v[i-1][j]) streak++;
                if(streak==2){
                    chars.push_back(v[i][j]);
                }
            }
        }
        if(v[0][0]==v[1][1] && v[1][1]==v[2][2]) chars.push_back(v[0][0]);
        if(v[0][2]==v[1][1] && v[1][1]==v[2][0]) chars.push_back(v[0][2]);
        if(chars.size()>1 || chars.size()==0) cout<<"DRAW"<<endl;
        else if(chars[0]=='.') cout<<"DRAW"<<endl;
        else cout<<chars[0]<<endl;
    }
    return 0;
}