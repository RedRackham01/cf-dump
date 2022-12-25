#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n,x,y,t1=0,t2=0;
    bool b=false;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        if(x%2!=0) t1++;
        if(y%2!=0) t2++;
        if(x%2+y%2==1) b=true;
    }
    if(t1%2==0 && t2%2==0)
        cout<<0;
    else if((t1+t2)%2!=0)
        cout<<-1;
    else
        cout<<((b)?1:-1);
}