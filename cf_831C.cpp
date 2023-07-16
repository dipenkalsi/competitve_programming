#include<bits/stdc++.h>
using namespace std;
long long findMax(set<long long> my_set)
{
    long long max_element;
    if (!my_set.empty())
        max_element = *(my_set.rbegin());

    return max_element;
}
 
long long findMin(set<long long> my_set)
{

    long long min_element;
    if (!my_set.empty())
        min_element = *my_set.begin();
 
    return min_element;
}
int main(){
    int t;
    cin>>t;
    while ( t--)
    {
         int n;
         cin>>n;
         vector<int>v(n);
         for ( int i = 0; i <  n; i++)
         {
             cin>>v[i];
         }

         sort(v.begin(),v.end());
        int ans=0;
        for ( int i = 0; i <n-2; i++)
        {
            ans=max(ans,v[i+1]-v[i]+v[n-1]-v[i]);
        }
        
        for ( int i = n-1; i >=2; i--)
        {
           ans=max(ans,v[i]-v[i-1]+v[i]-v[0]);
        }

        cout<<ans<<endl;   
    }
    
    return 0;
}