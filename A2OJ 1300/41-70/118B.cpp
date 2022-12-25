#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n;
    cin>>n;
    for(int i=-n;i<=n;i++)
    {
        for(int i1=0;i1<abs(i);i1++)
            cout<<"  ";
        for(int i2=0;i2<n-abs(i);i2++)
            cout<<i2<<" ";
        for(int i3=n-abs(i);i3>0;i3--)
            cout<<i3<<" ";
        cout<<0<<endl;
    }
}