#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,s=0;
    cin>>n>>k;
    int m=n-1;
    for(int i=1;i<=n;i++,m--)
    {
        s=s+i;
        if((s-m)==k)
            break;
    }
    cout<<m;  
    return 0;
}