#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n,m,p=1,t;
    long long int s=0;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        cin>>t;
        if(t>=p)
            s+=t-p;
        else if (t<p)
            s+=n-p+t;
        p=t;
    }
    cout<<s;
}