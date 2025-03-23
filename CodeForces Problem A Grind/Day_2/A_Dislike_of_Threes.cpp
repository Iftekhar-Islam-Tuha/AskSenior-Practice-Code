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
        int k; cin>>k;
        int i=1,j=1;
        while (true)
        {
            if(i%3==0 || i%10==3)
            {
                i++;
            }
            else
            {
                if(j==k)
                {
                    cout<<i<<NL
                    break;
                }
                else
                {
                    i++;
                    j++;
                }
            }
        }
    }
    return 0;
}