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

    queue<int> q;
    while (t--)
    {
        string s; cin>>s;
        if(s=="push")
        {
            int val; cin>>val;
            q.push(val);
        }
        else if(s=="front")
        {
            cout<<q.front()<<NL
        }
        else if(s=="back")
        {
            cout<<q.back()<<NL
        }
        else
        {
            q.pop();
        }
    }
    
    return 0;
}