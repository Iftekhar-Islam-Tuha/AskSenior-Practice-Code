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
        vector<ll> v(n),v2(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            v2[i]=v[i];
        }
        sort(v2.begin(),v2.end());
        ll max1=v2[n-1],max2=v2[n-2];
        for(int i=0; i<n; i++)
        {
            if(v[i]!=max1)
            {
                cout<<v[i]-max1<<" ";
            }
            else
            {
                cout<<v[i]-max2<<" ";
            }
        }
        cout<<NL
    }
    
    return 0;
}