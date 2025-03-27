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
    
    int n,q; cin>>n>>q;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    while (q--)
    {
        int x; cin>>x;
        bool flag=false;
        int l=0,r=n-1;
        while (l<=r)
        {
            int mid=(l+r)/2;
            if(v[mid]==x)
            {
                flag=true;
                break;
            }
            else
            {
                if(x>v[mid])
                {
                    l=mid+1;
                }
                else
                {
                    r=mid-1;
                }
            }
        }
        if(flag)
            cout<<"found"<<NL
        else
            cout<<"not found"<<NL
    }
    
    return 0;
}