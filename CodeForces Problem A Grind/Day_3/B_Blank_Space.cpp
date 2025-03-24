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
        vector<int> v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        int cnt=0,mx=0;
        for(int i=0; i<n; i++)
        {
            if(v[i]==0)
            {
                cnt++;
            }
            else
            {
                mx=max(mx,cnt);
                cnt=0;
            }
        }
        mx=max(mx,cnt);
        cout<<mx<<NL
    }
    
    return 0;
}