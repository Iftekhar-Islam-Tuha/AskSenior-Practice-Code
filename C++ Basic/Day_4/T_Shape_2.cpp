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
    int space=n-1;
    int star=1;
    for(int i=0; i<n; i++)
    {
        for(int j=space; j>i; j--)
        {
            cout<<" ";
        }
        for(int k=0; k<star; k++)
        {
            cout<<"*";
        }
        cout<<NL
        star+=2;
    }
    return 0;
}