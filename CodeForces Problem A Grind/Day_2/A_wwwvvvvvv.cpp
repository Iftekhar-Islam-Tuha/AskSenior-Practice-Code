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
    
    string s; cin>>s;
    map<char,int> mp;
    for(auto x:s)
    {
        mp[x]++;
    }
    int cnt=mp['v']+(2*mp['w']);
    cout<<cnt<<NL
    return 0;
}