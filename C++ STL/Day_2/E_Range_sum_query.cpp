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
    vector<ll> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    for(int i=1; i<n; i++)
    {
        v[i]+=v[i-1];
    }
    while (q--)
    {
        int l,r; cin>>l>>r;
        l--,r--;
        if(l>0)
        {
            cout<<v[r]-v[l-1]<<NL
        }
        else
        {
            cout<<v[r]<<NL
        }
    }
    
    return 0;
}