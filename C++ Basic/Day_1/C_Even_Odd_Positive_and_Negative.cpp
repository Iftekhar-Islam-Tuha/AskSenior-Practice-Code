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
    int even=0,odd=0,pos=0,neg=0;
    for(int i=0; i<n; i++)
    {
        if(v[i]>0)
        {
            pos++;
        }
        if(v[i]%2==0)
        {
            even++;
        }
        if(v[i]%2!=0)
        {
            odd++;
        }
        if(v[i]<0)
        {
            neg++;
        }
    }
    cout<<"Even: "<<even<<NL
    cout<<"Odd: "<<odd<<NL
    cout<<"Positive: "<<pos<<NL
    cout<<"Negative: "<<neg<<NL

    return 0;
}