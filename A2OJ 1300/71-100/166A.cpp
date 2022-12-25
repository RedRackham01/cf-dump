#include<bits/stdc++.h>
#define pp pair<int,int>
using namespace std;
bool func(pp a, pp b)
{
    return ((a.first>b.first) || (a.first==b.first) && a.second<b.second);
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n,k,x,y;
    cin>>n>>k;
    pp p[n];
    map<pp,int> m;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        p[i]=make_pair(x,y);
        m[p[i]]++;
    }
    sort(p,p+n,func);
    cout<<m[p[k-1]];
}