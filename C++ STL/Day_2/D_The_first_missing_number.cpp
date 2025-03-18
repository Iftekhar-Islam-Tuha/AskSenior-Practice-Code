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
    set<int> s;
    for(int i=0; i<n; i++)
    {
        int val; cin>>val;
        s.insert(val);
    }
    for(int i=-m; i<m; i++)
    {
        if(s.find(i)==s.end())
        {
            cout<<i<<NL
            break;
        }
    }
    return 0;
}