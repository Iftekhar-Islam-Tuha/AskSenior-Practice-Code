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
    
    ll n; cin>>n;
    ll cnt=0;
    for(int i=1; i<=n-1; i++)
    {
        ll val; cin>>val;
        cnt+=val;
    }
    ll missing=((n*(n+1))/2)-cnt;
    cout<<missing<<NL
    return 0;
}