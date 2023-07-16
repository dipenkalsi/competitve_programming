#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;
 cin>>t;
 while ( t--)
 {
    int n,c;
    cin>>n>>c;
    vector<int>v(n+1);
    for ( int i = 1; i <=n; i++)
    {
      cin>>v[i];
    }

    vector<int>res;
    for ( int i = 1; i <=n; i++)
    {
         res.push_back(v[i]+i);
    }

    sort(res.begin(),res.end());

    int ans=0;
    int cnt=0;
  for ( int i = 0; i <  res.size(); i++)
  {
    ans+=res[i];
    if(ans>c){
        break;
    }
    cnt++;
  }

  cout<<cnt<<endl;


 }
 
}