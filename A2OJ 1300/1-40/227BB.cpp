#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n,a;
    cin>>n;
    int ar[100001];
    for(int i=0;i<n;i++) 
    {
        cin>>a;
        ar[a]=i;
    }
    int m,b;
    long long l=0,r=0;
    cin>>m;
    while(m--)
    {
        cin>>b;
        l=l+ar[b]+1;
        r=r+n-ar[b];
    }
    cout<<l<<" "<<r;
}