#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,m;
    cin>>n>>m;
    int t=min(n,m);
    for(int i=0;i<t;i++)
        cout<<((n>m)?"BG":"GB");
    n-=t;m-=t;
    for(int i=0;i<max(n,m);i++)
        cout<<((m==0)?"B":"G");
}