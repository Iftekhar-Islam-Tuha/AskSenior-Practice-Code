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
        int n; cin>>n;
        string s; cin>>s;

        int i=0,j=n-1;
        int sz=n;
        while (i<j)
        {
            if(s[i]!=s[j])
            {
                sz-=2;
                i++;
                j--;
            }
            else
            {
                break;
            }
        }
        cout<<sz<<NL
    }
    
    return 0;
}