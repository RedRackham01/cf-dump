#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    int i=0,j=0,c=n;
    while(j<n)
    {
        if(a[j]<=2*a[i])
            j++;
        else 
            i++;
        c=min(c,n-(j-i));    
    }
    cout<<c;
}        