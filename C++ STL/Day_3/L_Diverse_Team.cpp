#include <bits/stdc++.h>
#define ll long long
#define Yes cout<<"YES"<<'\n';
#define No cout<<"NO"<<'\n';
#define NL '\n';

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,k; cin>>n>>k;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    map<int,int> mp;
    for(int i=0; i<n; i++)
    {
        mp[v[i]]=i+1;
    }
    if(mp.size()<k)
    {
        No
    }
    else
    {
        Yes
        for(auto x:mp)
        {
            if(k>0)
            {
                cout<<x.second<<" ";
                k--;
            }
        }
        cout<<NL
    }
    return 0;
}