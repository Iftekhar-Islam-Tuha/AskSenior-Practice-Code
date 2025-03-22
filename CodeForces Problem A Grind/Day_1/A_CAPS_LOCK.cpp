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
    
    string s; cin>>s;
    string s2;
    int n=s.size();
    for(int i=0; i<n; i++)
    {
        s2.push_back(char(s[i]-'a')+'A');
    }
    cout<<s2<<NL
    return 0;
}