#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int c[8]={0};
    int n,t;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        c[t]++;
    }
    if(c[5]==0 && c[7]==0 && c[1]==n/3 && c[2]>=c[4] && c[6]>=c[3] && (c[2]+c[3])==(c[4]+c[6]))
    {
        for(int i=0; i<c[4]; i++)
            cout<<"1 2 4 \n";
        for(int i=0; i< c[2]-c[4]; i++)
            cout<<"1 2 6 \n";
        for(int i=0; i< c[3]; i++)
            cout<<"1 3 6 \n";
    }
    else cout<<-1;
}   