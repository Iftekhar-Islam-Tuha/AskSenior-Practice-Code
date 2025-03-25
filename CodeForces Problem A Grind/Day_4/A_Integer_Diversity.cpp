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
        map<int,int> mp;
        for(int i=0; i<n; i++)
        {
            int val; cin>>val;
            mp[abs(val)]++;
        }
        int cnt=0;
        for(auto [key,val]:mp)
        {
            if(key==0)
            {
                cnt+=1;
            }
            else
            {
                if(val==1)
                {
                    cnt+=1;
                }
                else
                {
                    cnt+=2;
                }
            }
        }
        cout<<cnt<<NL
    }
    return 0;
}