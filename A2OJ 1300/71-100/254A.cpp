#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n,t;
    cin>>n;
    map<int,vector<int>> m;
    for(int i=1;i<=2*n;i++)
    {
        cin>>t;
        m[t].push_back(i);
    }
    for(auto it : m)
    {
        if((it.second).size()%2!=0)
        {
            cout<<-1;
            return 0;
        }
    }
    for(auto it:m)
    {
        for(int i=0;i<(it.second).size();i+=2)
            cout<<it.second[i]<<" "<<it.second[i+1]<<"\n";
    }
}