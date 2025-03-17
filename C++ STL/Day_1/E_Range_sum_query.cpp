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
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    vector<int> v2(n);
    v2[0]=v[0];
    for(int i=1; i<n; i++)
    {
        v2[i]=v[i]+v2[i-1];
    }
    while (q--)
    {
        int l,r; cin>>l>>r;
        l--,r--;
        if(l>0)
        {
            cout<<v2[r]-v2[l-1]<<NL
        }
        else
        {
            cout<<v2[r]<<NL
        }
    }
    
    return 0;
}