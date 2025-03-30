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
        vector<int> v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        int cnt=1;
        int valid=0;
        for(int i=1; i<n; i++)
        {
            if(v[i]>=v[i-1])
            {
                cnt++;
            }
            else
            {
                int sub=(cnt*(cnt+1))/2;
                valid+=sub;
                cnt=1;
            }
        }
        int sub=(cnt*(cnt+1))/2;
        valid+=sub;
        cout<<valid<<NL
    }
    return 0;
}