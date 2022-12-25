#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int y,k,n,s;
    cin>>y>>k>>n;
    if((y/k+1)*k-y>n-y)
    {
        cout<<-1;
        return 0;
    }
    for(int x=-1,i=y/k+1;(x=i*k-y)<=n-y;i++)
    {
        cout<<x<<" ";
    }
}
