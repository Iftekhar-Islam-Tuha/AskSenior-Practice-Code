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
    
    int n,a,b; cin>>n>>a>>b;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    int sum=a+b;
    int indx=-1;
    for(int i=0; i<n; i++)
    {
        if(v[i]==sum)
        {
            indx=i+1;
            break;
        }
    }
    cout<<indx<<NL
    return 0;
}