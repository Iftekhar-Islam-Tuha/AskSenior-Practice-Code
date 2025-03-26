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
    int cnt=1;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=4; j++)
        {
            if(j==4)
            {
                cout<<"PUM"<<NL
                cnt++;
            }
            else
            {
                cout<<cnt<<" ";
                cnt++;
            }
        }
    }
    return 0;
}