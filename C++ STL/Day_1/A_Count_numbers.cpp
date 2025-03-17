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
    
    int n,q; cin>>n>>q;

    map<int,int> mp;
    while (q--)
    {
        int x,val; cin>>x>>val;
        if(x==1)
        {
            mp[val]++;
        }
        else
        {
            cout<<mp[val]<<NL
        }
    }
    
    return 0;
}