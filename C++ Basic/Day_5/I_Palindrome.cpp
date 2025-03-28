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
    int num=n;
    int rev=0;
    while (n>0)
    {
        int last=n%10;
        n/=10;
        rev=((rev*10)+last);
    }
    if(rev==num)
    {
        cout<<rev<<NL
        Yes
    }
    else
    {
        cout<<rev<<NL
        No
    }
    
    return 0;
}