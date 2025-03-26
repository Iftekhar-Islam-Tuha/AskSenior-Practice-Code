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
    
    int n,m; cin>>n>>m;
    vector<vector<int>> v(n,vector<int> (m));
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>v[i][j];
        }
    }
    bool flag=false;
    int x; cin>>x;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(v[i][j]==x)
            {
                flag=true;
                break;
            }
        }
    }
    if(flag)
        cout<<"will not take number"<<NL
    else
        cout<<"will take number"<<NL
    return 0;
}