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
    int space1=n-1;
    int star1=1;
    for(int i=0; i<n; i++)
    {
        for(int j=space1; j>i; j--)
        {
            cout<<" ";
        }
        for(int k=0; k<star1; k++)
        {
            cout<<"*";
        }
        cout<<NL
        star1+=2;
    }
    int space2=0;
    int star2=star1-2;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<space2; j++)
        {
            cout<<" ";
        }
        space2++;
        for(int k=star2; k>0; k--)
        {
            cout<<"*";
        }
        star2-=2;
        cout<<NL
    }
    return 0;
}