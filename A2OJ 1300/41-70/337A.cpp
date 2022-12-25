#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n,m,min=INT_MAX;
    cin>>n>>m;
    int a[m];
    for(int i=0;i<m;i++) cin>>a[i];
    sort(a,a+m);
    for(int i=0;i<=m-n;i++)
        if(a[i+n-1]-a[i]<min)
            min=a[i+n-1]-a[i];
    cout<<min;
}