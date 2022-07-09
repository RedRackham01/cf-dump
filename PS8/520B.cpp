#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n,m,c=0;
    cin>>n>>m;
    while(m>n)
    {
        c++;
        (m%2==0) ? (m/=2) : m++;
    }
    cout<<c+(n-m);
}