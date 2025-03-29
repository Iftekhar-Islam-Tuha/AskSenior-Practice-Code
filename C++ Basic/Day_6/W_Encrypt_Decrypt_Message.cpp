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
    string s; cin>>s;

    string Key="PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    string Org="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    string final;
    if(n==1)
    {
        for(int i=0; i<s.size(); i++)
        {
            int j=Org.find(s[i]);
            final.push_back(Key[j]);
        }
    }
    else
    {
        for(int i=0; i<s.size(); i++)
        {
            int j=Key.find(s[i]);
            final.push_back(Org[j]);
        }
    }
    cout<<final<<NL
    return 0;
}