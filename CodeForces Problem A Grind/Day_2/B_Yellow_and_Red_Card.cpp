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
    
    int n,q;
    cin>>n>>q;
    map<int,pair<int,int>> mp;
    while (q--)
    {
        int x,y; cin>>x>>y;
        if(x==1)
        {
            mp[y].first++;;
        }
        else if(x==2)
        {
            mp[y].second++;
        }
        else
        {
            if(mp[y].first>=2 || mp[y].second>=1)
                Yes
            else
                No

        }
    }
    return 0;
}