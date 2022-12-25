#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n,k,i;
    cin>>n>>k;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(i>=k && a[i]!=a[k-1])
        {   
            cout<<-1;
            return 0;
        }
    }
    for(i=k-2;i>=0;i--)
    {
        if(a[i]!=a[k-1]) break;
    }
    cout<<i+1;
}