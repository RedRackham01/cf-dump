#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n,p[7];
    cin>>n;
    for(int i=0;i<7;i++)
        cin>>p[i];
    int i=0;
    while(n!=0)
    {
        if(n-p[i]<=0)
            break;
        n-=p[i];
        i++;
        if(i==7) i=0;
    }
    cout<<i+1;
}