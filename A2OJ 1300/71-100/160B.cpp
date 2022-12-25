#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n;
    string s;
    cin>>n>>s;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        a[i]=int(s[i]);
        b[i]=int(s[i+n]);
    }
    sort(a,a+n);
    sort(b,b+n);
    bool m=true,l=true;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=b[i])
        {
            l=false; break;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]<=b[i])
        {
            m=false; break;
        }
    }
    cout<< ((m||l) ? "YES" : "NO");
}