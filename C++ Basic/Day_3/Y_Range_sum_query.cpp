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
    vector<ll> v2=v;
    v2[0]=v[0];
    for(int i=1; i<n; i++)
    {
        v2[i]+=v2[i-1];
    }
    while (q--)
    {
        int i,j; cin>>i>>j;
        i--,j--;
        if(i==0)
        {
            cout<<v2[j]<<NL
        }
        else
        {
            cout<<v2[j]-v2[i-1]<<NL
        }
    }
    return 0;
}