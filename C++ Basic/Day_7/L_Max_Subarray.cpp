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
        vector<int> v2;
        for(int i=0; i<n; i++)
        {
            int mx=INT_MIN;
            for(int j=i; j<n; j++)
            {
                mx=max(mx,v[j]);
                v2.push_back(mx);
            }
        }
        for(auto val:v2)
        {
            cout<<val<<" ";
        }
        cout<<NL
    }
    
    return 0;
}