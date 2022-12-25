#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n,m,c=0;
    cin>>n>>m;
    for(int a=0;a<=m && a*a<=n;a++)
    {
        int b= n- a*a;
        if(a+b*b==m)
            c++;
    }
    cout<<c;
}