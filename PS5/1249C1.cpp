#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q,n,s=0;
    cin>>q;
    for(int i=0;i<10;i++)
        s+=(int)pow(3,i);
    while(q--)
    {
        cin>>n;
        int num=s;
        for(int i=9;i>=0;i--)
            if(num-(int)pow(3,i)>=n)
                num-=(int)pow(3,i);
        cout<<num<<endl;        
    }    
}