#include <bits/stdc++.h>
#define ll long long
#define Yes cout<<"Yes"<<'\n';
#define No cout<<"No"<<'\n';
#define NL '\n';

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    map<string,int> mp;
    int n; cin>>n;
    while (n--)
    {
        string s; cin>>s;
        mp[s]++;
    }
    if(mp["For"]>mp["Against"])
        Yes
    else
        No
    
    return 0;
}