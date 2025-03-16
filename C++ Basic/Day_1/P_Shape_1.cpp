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
    for(int i=n; i>=1; i--)
    {
        for(int j=i; j>=1; j--)
        {
            cout<<"*";
        }
        cout<<NL
    }
    return 0;
}