#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n,t,a=0,b=0,c=-1;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        if(t==1)
        {
            a++;
            if(b>0)
                b--;
        }
        else
        {
            b++;
            if(b>c)
                c=b;
        }
    }
    cout<<a+c;
}   
