#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n,t;
    cin>>n;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        sum+=t;
    }
    cout<<((sum%n==0)?n :n-1);
}