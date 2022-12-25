#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n,t,f=0,z=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        if(t==0)z++;
        else f++;
    }
    if(z==0)        cout<<-1;
    else if(f<9)    cout<<0;
    else
    {
        for(int i=0;i<(f-f%9);i++) cout<<5;
        for(int i=0;i<z;i++)    cout<<0;
    }
}