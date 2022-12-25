#include<bits/stdc++.h>
using namespace std;
int d[1010100];
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int a,b,c,m;
    long long ans=0;
    cin>>a>>b>>c;
    m=a*b*c;
    memset(d, 0, sizeof(d));
    for(int i = 1; i <= m; i++)
    {
        for(int j = i; j <= m; j += i)
            d[j]++;
    }
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
            for(int k=1;k<=c;k++)
            {
                ans=(ans+d[i*j*k])%1073741824;
            }
        }
    }
    cout<<ans;
}