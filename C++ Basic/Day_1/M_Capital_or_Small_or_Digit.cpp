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
    
    char c; cin>>c;

    if(c>='0' && c<='9')
    {
        cout<<"IS DIGIT"<<NL
    }
    else
    {
        cout<<"ALPHA"<<NL
        if(c>='a' && c<='z')
        {
            cout<<"IS SMALL"<<NL
        }
        else
        {
            cout<<"IS CAPITAL"<<NL
        }
    }
    return 0;
}