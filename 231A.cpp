#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n,s=0;
    cin>>n;
    while(n--)
    {
        int a,c=0;
        for(int i=0;i<3;i++)
        {
            cin>>a;
            if(a)c++;
        }
        if(c>1) s++;
    }
    cout<<s;
}