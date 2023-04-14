#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        int odds=0, evens=0;
        for(int i=0;i<n;i++){
            int el;
            cin>>el;
            if(i%2==0 && el%2!=0) odds++;
            else if(i%2!=0 && el%2==0) evens++;  
        }
        if(odds!=evens){
            cout<<"-1"<<endl;
            continue;
        }
        else{
            cout<<odds<<endl;
        }
    }
    return 0;
}