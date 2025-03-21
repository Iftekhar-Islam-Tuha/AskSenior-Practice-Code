#include <bits/stdc++.h>
#define ll long long
#define Yes cout<<"YES"<<'\n';
#define No cout<<"NO"<<'\n';
#define NL '\n';

using namespace std;
bool isPrime(int n)
{
    int cnt=0;
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            cnt++;
        }
    }
    if(cnt==2)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin>>n;
    for(int i=2; i<=n; i++)
    {
        if(isPrime(i))
            cout<<i<<" ";
    }
    cout<<NL
    return 0;
}