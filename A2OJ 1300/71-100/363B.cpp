#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n,k,sum=0,c=1,min=INT_MAX,ans;
    cin>>n>>k;
    int a[n+1]; a[0]=0;
    for(int i =1;i<=n;i++) 
    {
        cin>>a[i];
        sum+=a[i];
        if(c!=k) 
            c++;
        else
        {
            sum-=a[i-k];
            if(sum<min)
            {
                min=sum;
                ans=i-k+1;
            }
        }

    }
    cout<<ans;
}