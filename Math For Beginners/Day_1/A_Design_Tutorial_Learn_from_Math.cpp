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

    if(n%2==0)
    {
        int x=4,y=n-4;
        cout<<x<<" "<<y<<NL
    }
    else
    {
        int x=9,y=n-9;
        cout<<x<<" "<<y<<NL
    }
    return 0;
}