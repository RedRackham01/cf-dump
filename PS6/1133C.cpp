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
    sort(a,a+n);
    int c=1,i=0,j=1;
    while(j<n)
    {
        if(a[j]-a[i]<=5)
            j++;
        else
            i++;
        c=max(c,j-i);        
    }
    cout<<c;
}