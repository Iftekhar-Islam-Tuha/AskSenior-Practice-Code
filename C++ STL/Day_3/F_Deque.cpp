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
    
    deque<int> dq;
    int t; cin>>t;
    while (t--)
    {
        string s; cin>>s;
        if(s=="push_back")
        {
            int val; cin>>val;
            dq.push_back(val);
        }
        else if(s=="push_front")
        {
            int val; cin>>val;
            dq.push_front(val);
        }
        else if(s=="front")
        {
            cout<<dq.front()<<NL
        }
        else if(s=="back")
        {
            cout<<dq.back()<<NL
        }
        else if(s=="pop_back")
        {
            dq.pop_back();
        }
        else if(s=="pop_front")
        {
            dq.pop_front();
        }
        else
        {
            int i; cin>>i;
            i--;
            cout<<dq.at(i)<<NL
        }


    }
    
    return 0;
}