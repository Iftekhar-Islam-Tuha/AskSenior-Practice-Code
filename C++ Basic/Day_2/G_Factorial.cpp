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
    
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        ll ans=1;
        for(int i=1; i<=n; i++)
        {
            ans*=i;
        }
        cout<<ans<<NL
    }
    return 0;
}