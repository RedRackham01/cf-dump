#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n,c=0;
    cin>>n;
    int a[n];
    cin>>a[0];
    int u,l; u=l=a[0];
    for(int i=1;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>u)
        {
            c++;u=a[i];
        }
        if(a[i]<l)
        {
            c++;l=a[i];
        }
    }
    cout<<c;
}