#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int a;
    map<int,int> m;
    for(int i=0;i<4;i++)
    {
        cin>>a;
        m[a]++;
    }
    cout<<(4-m.size());
}