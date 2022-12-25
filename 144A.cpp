#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n,max,min,u,l;
    cin>>n;
    int a[n];
    cin>>a[0];
    max=min=a[0];
    u=l=0;
    for(int i=1;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>max)
        {
            max=a[i];u=i;
        }
        if(a[i]<=min)
        {
            min=a[i];l=i;
        }

    }
    if(u<l)
        cout<<(u+n-l-1);
    else
        cout<<(u+n-l-2);
}