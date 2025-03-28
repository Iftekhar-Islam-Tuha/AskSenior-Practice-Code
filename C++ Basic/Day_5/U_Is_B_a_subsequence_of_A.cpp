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
    vector<int> v1(n),v2(m);
    for(int i=0; i<n; i++)
    {
        cin>>v1[i];
    }
    for(int i=0; i<m; i++)
    {
        cin>>v2[i];
    }
    int j=0;
    for(int i=0; i<n; i++)
    {
        if(v1[i]!=v2[j])
        {
            continue;
        }
        else
        {
            j++;
        }
    }
    if(j==m)
        Yes
    else
        No
    return 0;
}