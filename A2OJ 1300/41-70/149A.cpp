#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int k,s=0;
    cin>>k;
    int a[12];
    for(int i=0;i<12;i++)
    {
        cin>>a[i];
        s+=a[i];
    }
    if(s<k)
    {
        cout<<-1;
        return 0;
    }
    sort(a,a+12,greater<int>());
    int c=0;s=0;
    while(s<k)
    {
        s+=a[c];
        c++;
    }
    cout<<c;
}