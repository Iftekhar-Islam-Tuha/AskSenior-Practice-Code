#include <bits/stdc++.h>
#define ll long long
#define Yes cout<<"YES"<<'\n';
#define No cout<<"NO"<<'\n';
#define NL '\n';

using namespace std;

bool cmp(pair<string,int> p1, pair<string,int> p2)
{
    if(p1.second>p2.second)
    {
        return true;
    }
    else if(p1.second==p2.second)
    {
        if(p1.first<p2.first)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin>>n;
    vector<pair<string,int>> v;
    for(int i=0; i<n; i++)
    {
        string s; cin>>s;
        int val; cin>>val;

        v.push_back({s,val});
    }
    sort(v.begin(),v.end(),cmp);
    for(auto val:v)
    {
        cout<<val.first<<" "<<val.second<<NL
    }
    return 0;
}