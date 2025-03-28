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
    
    ll n; cin>>n;
    string s; cin>>s;

    ll sum=0;
    for(int i=0; i<n; i++)
    {
        int num=s[i]-'0';
        sum+=num;
    }
    cout<<sum<<NL
    return 0;
}