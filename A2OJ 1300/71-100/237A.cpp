#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n,a,b;
    cin>>n;
    map<int,int> m;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        m[a*60+b]++;
    }
    a=0;
    for(auto it:m)
        a= max(it.second,a);
    cout<<a;
}