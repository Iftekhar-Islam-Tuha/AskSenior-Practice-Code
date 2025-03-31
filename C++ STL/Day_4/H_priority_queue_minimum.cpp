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
    priority_queue<int,vector<int>,greater<int>> pq;
    while (t--)
    {
        string s; cin>>s;
        
        if(s=="push")
        {
            int k; cin>>k;
            pq.push(k);
        }
        else if(s=="pop")
        {
            pq.pop();
        }
        else
        {
            cout<<pq.top()<<NL
        }
    }
    
    return 0;
}