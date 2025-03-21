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
    
    double x,y; cin>>x>>y;
    if(x==0.0 && y==0.0)
    {
        cout<<"Origem"<<NL
    }
    else if(x==0.0 && y!=0.0)
    {
        cout<<"Eixo Y"<<NL
    }
    else if(x!=0.0 && y==0.0)
    {
        cout<<"Eixo X"<<NL
    }
    else if(x>0.0 && y>0.0)
    {
        cout<<"Q1"<<NL
    }
    else if(x<0.0 && y>0.0)
    {
        cout<<"Q2"<<NL
    }
    else if(x<0.0 && y<0.0)
    {
        cout<<"Q3"<<NL
    }
    else
    {
        cout<<"Q4"<<NL
    }
    return 0;
}