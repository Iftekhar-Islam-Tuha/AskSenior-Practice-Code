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

    int n; cin>>n;
    int customer=1;
    set<pair<int,int>> s1;
    multiset<pair<int,int>> s2;
    vector<int> v;

    for(int i=1; i<=n; i++)
    {
        int q; cin>>q;
        if(q==1)
        {
            int val; cin>>val;
            s1.insert({customer,val});
            s2.insert({val,-customer});
            customer++;
        }
        else if(q==2)
        {
            //Monocarp Turn
            int serial=s1.begin()->first,val=s1.begin()->second;
            v.push_back(serial);
            s1.erase(s1.begin());
            s2.erase({val,-serial});
        }
        else
        {
            //Polycarp Turn
            int serial=-s2.rbegin()->second,val=s2.rbegin()->first;
            v.push_back(serial);
            s2.erase(--s2.end());
            s1.erase({serial,val});

        }
    }
    for(auto val:v)
    {
        cout<<val<<" ";
    }
    cout<<NL
    return 0;
}