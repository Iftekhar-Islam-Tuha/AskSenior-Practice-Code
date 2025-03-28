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
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    bool flag=true;
    int l=0,r=n-1;
    while (l<=r)
    {
        if(v[l]!=v[r])
        {
            flag=false;
            break;
        }
        l++,r--;
    }
    if(flag)
        Yes
    else
        No

    return 0;
}