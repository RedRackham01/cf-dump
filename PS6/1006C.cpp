#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    int n;
    cin>>n;
    int d[n];
    for(int i=0;i<n;i++)
        cin>>d[i];
    int l=0,r=n-1;
    ll a=0,s1=d[l],s3=d[r];
    while(l<r)
    {
        if(s1<s3)
        {
            l++;
            s1+=d[l];
        }
        else if(s1>s3)
        {
            r--;
            s3+=d[r];
        }
        else
        {
            a=max(a,s1);
            l++; r--;
            s1+=d[l]; 
            s3+=d[r];
        }
    }
    cout<<a;

    
}