#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll q,n,s=0;
    cin>>q;
    for(int i=0;i<40;i++)
        s+=(ll)pow(3,i);
    while(q--)
    {
        cin>>n;
        ll num=s;
        for(int i=40;i>=0;i--)
            if(num-(ll)pow(3,i)>=n)
                num-=(ll)pow(3,i);
        cout<<num<<endl;        
    }    
}