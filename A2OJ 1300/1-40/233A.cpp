#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n;
    cin>>n;
    if(n%2!=0)
        cout<<-1;
    else
    {
        int a[n];
        for(int i=0;i<n;i++)    a[i]=i+1;
        for(int i=0;i<n;i+=2)    swap(a[i],a[i+1]);
        for(int i=0;i<n;i++)    cout<<a[i]<<" ";
    }
}
