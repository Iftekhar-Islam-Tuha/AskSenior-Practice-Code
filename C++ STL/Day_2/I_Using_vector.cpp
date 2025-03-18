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
    vector<int> v;
    while (n--)
    {
        int val; cin>>val;
        v.push_back(val);
    }
    while (q--)
    {
        string s; cin>>s;
        if(s=="sort")
        {
            int l,r; cin>>l>>r;
            l--;
            sort(v.begin()+l,v.begin()+r);
        }
        else if(s=="pop_back")
        {
            v.pop_back();
        }
        else if(s=="back")
        {
            cout<<v.back()<<NL
        }
        else if(s=="reverse")
        {
            int l,r; cin>>l>>r;
            l--;
            reverse(v.begin()+l,v.begin()+r);
        }
        else if(s=="front")
        {
            cout<<v.front()<<NL;
        }
        else if(s=="push_back")
        {
            int val; cin>>val;
            v.push_back(val);
        }
        else
        {
            int i; cin>>i;
            i--;
            cout<<v[i]<<NL
        }
    }
    return 0;
}