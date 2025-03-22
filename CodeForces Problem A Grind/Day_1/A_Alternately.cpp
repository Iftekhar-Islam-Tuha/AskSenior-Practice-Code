#include <bits/stdc++.h>
#define ll long long
#define Yes cout<<"Yes"<<'\n';
#define No cout<<"No"<<'\n';
#define NL '\n';

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin>>n;
    string s; cin>>s;
    bool flag=true;
    for(int i=0; i<n-1; i++)
    {
        if(s[i]==s[i+1])
        {
            flag=false;
            break;
        }
    }
    if(flag)
        Yes
    else
        No
    return 0;
}