#include <bits/stdc++.h>
#define ll long long
#define Yes cout<<"YES"<<'\n';
#define No cout<<"NO"<<'\n';
#define NL '\n';

using namespace std;
int gcd(int a, int b)
{
    if(a==0)
    {
        return b;
    }
    return gcd(b%a,a);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a,b;
    cin>>a>>b;
    if(a>b)
        swap(a,b);
    cout<<gcd(a,b)<<NL
    return 0;
}