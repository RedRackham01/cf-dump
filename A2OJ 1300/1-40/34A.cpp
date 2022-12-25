#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n,min=INT_MAX,a,b;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        if(i>0)
        {
            if(abs(ar[i]-ar[i-1])<=min)
            {
                min=abs(ar[i]-ar[i-1]);
                a=i ; b=i+1;
            }
        }
    }
    if(abs(ar[0]-ar[n-1])<=min)
        cout<<n<<" "<<1;
    else
        cout<<a<<" "<<b;

}