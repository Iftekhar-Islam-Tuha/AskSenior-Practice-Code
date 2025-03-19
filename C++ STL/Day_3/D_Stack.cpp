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
    
    stack<int> st;
    int t; cin>>t;
    while (t--)
    {
        string s; cin>>s;
        if(s=="push")
        {
            int val; cin>>val;
            st.push(val);
        }
        else if(s=="top")
        {
            cout<<st.top()<<NL
        }
        else
        {
            st.pop();
        }
    }
    
    return 0;
}