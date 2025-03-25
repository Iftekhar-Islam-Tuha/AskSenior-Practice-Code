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
    vector<string> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    set<string> s;
    for(int i=0; i<m; i++)
    {
        string st; cin>>st;
        s.insert(st);
    }
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        string sub=v[i].substr(3,3);
        if(s.find(sub)!=s.end())
        {
            cnt++;
        }
    }
    cout<<cnt<<NL
    return 0;
}