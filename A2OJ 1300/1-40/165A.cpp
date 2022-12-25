#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n,l,r,u,lw,c=0;
    cin>>n;
    int x[n],y[n];
    for(int i=0;i<n;i++)
        cin>>x[i]>>y[i];
    for(int i=0;i<n;i++)
    {
        l=r=u=lw=0;
        for(int j=0;j<n;j++)
        {
            if(x[j]>x[i] && y[j]==y[i])
                r++;
            else if(x[j]<x[i] && y[j]==y[i])
                l++;
            else if(x[j]==x[i] && y[j]<y[i])
                lw++;
            else if(x[j]==x[i] && y[j]>y[i])
                u++;
        }
        if(r>0 && l>0 && u>0 && lw>0)
            c++;
    }
    cout<<c;
}