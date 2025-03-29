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
    string a="hello";
    int j=0;

    for(int i=0; i<s.size(); i++)
    {
        if(s[i]==a[j])
        {
            j++;
        }
    }
    if(j==a.size())
        Yes
    else
        No
    return 0;
}