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
        string a,b; cin>>a>>b;
        map<char,int> mp;
        for(int i=0; i<26; i++)
        {
            mp[a[i]]=i+1;
        }
        int cnt=0;
        int n=b.size();
        for(int i=1; i<n; i++)
        {
            cnt+=abs(mp[b[i-1]]-mp[b[i]]);
        }
        cout<<cnt<<NL
    }
    
    return 0;
}