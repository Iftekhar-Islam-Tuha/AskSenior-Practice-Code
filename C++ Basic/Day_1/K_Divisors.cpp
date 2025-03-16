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

    int i=1;
    while (i<=n)
    {
        if(n%i==0)
        {
            cout<<i<<NL
        }
        i++;
    }
    
    return 0;
}