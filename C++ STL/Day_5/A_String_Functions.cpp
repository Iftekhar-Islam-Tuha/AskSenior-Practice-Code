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
    string s; cin>>s;
    while (q--)
    {
        string x; cin>>x;
        if(x=="pop_back")
        {
            s.pop_back();
        }
        else if(x=="front")
        {
            cout<<s.front()<<NL
        }
        else if(x=="back")
        {
            cout<<s.back()<<NL
        }
        else if(x=="sort")
        {
            int l,r; cin>>l>>r;
            l--,r--;
            if(l>r)
                swap(l,r);
            sort(s.begin()+l,s.begin()+r+1);
        }
        else if(x=="reverse")
        {
            int l,r; cin>>l>>r;
            l--,r--;
            if(l>r)
                swap(l,r);
            reverse(s.begin()+l,s.begin()+r+1);
        }
        else if(x=="print")
        {
            int i; cin>>i;
            i--;
            cout<<s[i]<<NL
        }
        else if(x=="substr")
        {
            int l,r; cin>>l>>r;
            l--,r--;
            if(l>r)
                swap(l,r);
            cout<<s.substr(l,r-l+1)<<NL
        }
        else
        {
            char c; cin>>c;
            s.push_back(c);
        }
    }
    
    return 0;
}