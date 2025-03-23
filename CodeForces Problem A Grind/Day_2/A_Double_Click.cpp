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
    int ans=-1;
    for(int i=0; i<n-1; i++)
    {
        if(v[i]<v[i+1])
        {
            if(v[i+1]-v[i]<=k)
            {
                ans=v[i+1];
                break;
            }
        }
    }
    cout<<ans<<NL
    return 0;
}