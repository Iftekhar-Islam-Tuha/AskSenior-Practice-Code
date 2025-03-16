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

    int a,b,c,d; cin>>a>>b>>c>>d;
    if(b>=c)
    {
        cout<<c<<" "<<b<<NL
    }
    else
    {
        cout<<-1<<NL
    }
    return 0;
}