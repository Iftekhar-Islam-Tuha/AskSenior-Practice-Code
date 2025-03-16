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
    
    int a,b;
    char c;
    cin>>a>>c>>b;

    if(c=='+')
        cout<<a+b<<NL
    else if(c=='-')
        cout<<a-b<<NL
    else if(c=='*')
        cout<<a*b<<NL
    else
        cout<<a/b<<NL
    return 0;
}