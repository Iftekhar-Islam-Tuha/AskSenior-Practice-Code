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
    
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    ll cnt=0;
    for(int i=1; i<n; i++)
    {
        if(v[i]>=v[i-1])
        {
            continue;
        }
        else
        {
            cnt+=v[i-1]-v[i];
            v[i]=v[i-1];
        }
    }
    cout<<cnt<<NL
    return 0;
}