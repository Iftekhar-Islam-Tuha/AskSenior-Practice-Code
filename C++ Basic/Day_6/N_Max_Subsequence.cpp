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
    string s; cin>>s;
    int cnt=1;
    for(int i=1; i<n; i++)
    {
        if(s[i]!=s[i-1])
        {
            cnt++;
        }
    }
    cout<<cnt<<NL
    return 0;
}