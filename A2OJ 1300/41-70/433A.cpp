#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n,t;
    cin>>n;
    int a[3]={0};
    for(int i=0;i<n;i++)
    {
        cin>>t;
        a[t/100]++;
    }
    a[2]%=2; 
    a[1]-=2*a[2];
    if(a[1]>=0 && a[1]%2==0)
        cout<<"YES";
    else   cout<<"NO";
}