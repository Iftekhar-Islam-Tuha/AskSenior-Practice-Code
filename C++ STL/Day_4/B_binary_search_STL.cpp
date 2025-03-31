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
    int n,q; cin>>n>>q;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    while (q--)
    {
        string s; cin>>s;
        int k; cin>>k;
        if(s=="binary_search")
        {
            if(binary_search(v.begin(),v.end(),k))
                cout<<"found"<<NL
            else
                cout<<"not found"<<NL
        }
        else if(s=="upper_bound")
        {
            auto it=upper_bound(v.begin(),v.end(),k);

            if(it==v.end())
                cout<<"-1"<<NL
            else
                cout<<*it<<NL
        }
        else
        {
            auto it=lower_bound(v.begin(),v.end(),k);

            if(it==v.end())
                cout<<"-1"<<NL
            else
                cout<<*it<<NL
        }
    }    
    return 0;
}