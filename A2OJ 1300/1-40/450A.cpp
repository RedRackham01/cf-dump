#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    queue<int> q;
    int n,m,l;
    cin>>n>>m;
    double c,max=0;
    for(int i=1;i<=n;i++)
    {
        cin>>c;
        if(ceil(c/m)>=max)
        {
            l=i;
            max=ceil(c/m);
        }
    }
    cout<<l;
}