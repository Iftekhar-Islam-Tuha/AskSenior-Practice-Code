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
    map<string,int> mp;
    int t; cin>>t;
    while(t--)
    {
        string s; cin>>s;
        if(mp[s]==0)
        {
            cout<<"OK"<<NL
            mp[s]++;
        }
        else
        {
            cout<<s<<mp[s]<<NL
            mp[s]++;
        }
    }
    return 0;
}