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
    
    int k,s; cin>>k>>s;

    int cnt=0;
    for(int i=0; i<=s; i++)
    {
        for(int j=0; j<=s; j++)
        {
            for(int k=0; k<=s; k++)
            {
                if(i+j+k==s)
                {
                    cnt++;
                }
            }
        }
    }
    cout<<cnt<<NL
    return 0;
}