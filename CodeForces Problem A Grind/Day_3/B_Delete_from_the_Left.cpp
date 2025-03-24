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
    
    string a,b; cin>>a>>b;
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    int cnt=0;
    int i=0;
    while (i<min(a.size(),b.size()))
    {
        if(a[i]==b[i])
        {
            cnt+=2;
            i++;
        }
        else
        {
            break;
        }
    }
    cout<<((a.size()+b.size())-cnt)<<NL

    return 0;
}