#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,m=INT_MAX;
    cin>>n>>k;
    int a[n],b[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
    {
        cin>>b[i];
        m=min(b[i]/a[i],m); 
    }     
    for(i=0;i<n;i++)
        b[i]-=m*a[i];
    while(k>0)
    {
        int x=0;
        for(i=0;i<n;i++)
        {
            b[i]-=a[i];
            if(b[i]<0)
            {
                x-=b[i]; b[i]=0;
            }
        }
        if(x<=k)
        {
            k-=x;
            m++;
        }
        else break;    
    }
    cout<<m;
}    