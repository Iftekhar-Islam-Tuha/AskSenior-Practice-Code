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
    
    int t; cin>>t;
    while (t--)
    {
        int a,b; cin>>a>>b;
        int dif=abs(b-a);
        if(dif%10!=0)
        {
            cout<<((dif/10)+1)<<NL
        }
        else
        {
            cout<<(dif/10)<<NL
        }
    }
    
    return 0;
}