#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int c=0,l=n,r=n-1;
    for(;r>=0;r--)
    {
        if(r<l)
            c++;
        l=min(l,r-a[r]);  
    }
    cout<<c;
}