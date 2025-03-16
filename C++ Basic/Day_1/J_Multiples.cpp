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
    
    int a,b; cin>>a>>b;

    if(a%b==0 || b%a==0)
        cout<<"Multiples"<<NL
    else
        cout<<"No Multiples"<<NL
    return 0;
}