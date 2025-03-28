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
    
    int n,k; cin>>n>>k;
    int cnt=0;
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=n; j++)
        {
            int z=k-(i+j);
            if(z>=0 && z<=n)
            {
                cnt++;
            }
        }
    }
    cout<<cnt<<NL
    return 0;
}