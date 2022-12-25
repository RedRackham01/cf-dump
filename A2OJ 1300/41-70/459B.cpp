#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n;
    cin>>n;
    long long b[n];
    for(int i=0;i<n;i++) cin>>b[i];
    sort(b,b+n);
    long long u=0,l=0;
    for(int i=0;i<n;i++)
    {
        if(b[i]==b[0])l++;
        if(b[i]==b[n-1]) u++;
    }
    cout<<b[n-1]-b[0]<<" ";
    if(b[0]==b[n-1]) cout<<u*(l-1)/2;
    else cout<<u*l;
}