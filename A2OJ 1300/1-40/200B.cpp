#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n;
    double a,s=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        s=s+a;
    }
    cout<<setprecision(12)<<s/n;
}