#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n,f,s=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>f;
        s+=f;
    }
    f=0; 
    s=s%(n+1);
    for(int i=1;i<=5;i++)
    {
        if((s+i)%(n+1)!=1)
            f++;
    }
    cout<<f;
}