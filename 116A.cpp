#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n,a,b,s=0,m=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        s=s-a+b;
        if(s>m) m=s;
    }
    cout<<m;
}