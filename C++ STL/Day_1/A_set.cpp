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
    set<int> st;
    while (t--)
    {
        string s; cin>>s;
        int val; cin>>val;

        if(s=="insert")
        {
            st.insert(val);
        }
        else if(s=="find")
        {
            if(st.find(val)!=st.end())
            {
                cout<<"found"<<NL
            }
            else
            {
                cout<<"not found"<<NL
            }
        }
        else if(s=="lower_bound")
        {
            if(st.lower_bound(val)!=st.end())
            {
                cout<<*(st.lower_bound(val))<<NL
            }
            else
            {
                cout<<-1<<NL
            }
        }
        else
        {
            if(st.upper_bound(val)!=st.end())
            {
                cout<<*(st.upper_bound(val))<<NL
            }
            else
            {
                cout<<-1<<NL
            }
        }

    }
    
    return 0;
}