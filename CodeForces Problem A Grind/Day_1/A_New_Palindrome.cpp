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
    while(t--)
    {
        string s; cin>>s;
        map<char,int> mp;
        int n=s.size();
        for(int i=0; i<n; i++)
        {
            mp[s[i]]++;
        }
        int even=0;
        for(auto [val,cnt]:mp)
        {
            if(cnt>=2)
            {
                even++;
            }
        }
        if(even>=2)
            Yes
        else
            No
    }
    return 0;
}