#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    int n,k,s1=0,s2=0;
    cin>>n>>k;
    int a[n],b[n+1];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
        if(b[i])
        {
            s1+=a[i];
            a[i]=0;
        }
    }
    b[0]=0;
    for(int i=1;i<=n;i++)
        b[i]=b[i-1]+a[i-1];
    for(int i=n;i>=k;i--)
        s2=max(s2,b[i]-b[i-k]);
    cout<<s1+s2;
}