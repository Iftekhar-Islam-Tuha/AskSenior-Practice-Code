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
    int k=1;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<k; j++)
        {
            cout<<"*";
        }
        cout<<NL
        k++;
    }
    return 0;
}