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
    for(int i=0; i<n; i++)
    {
        if(v[i]%2==0)
        {
            cout<<v[i]<<" ";
        }

    }
    cout<<NL
    return 0;
}