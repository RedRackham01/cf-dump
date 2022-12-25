#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n;
    cin>>n;
    int l[n],r[n];
    for(int i=0;i<n;i++)
        cin>>l[i]>>r[i];
    cout<<(min(count(l,l+n,0),count(l,l+n,1))+min(count(r,r+n,0),count(r,r+n,1)));
}
