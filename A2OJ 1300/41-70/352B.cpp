#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n,t;
    cin>>n;
    map<int,vector<int>> m;
    vector<pair<int,int>> v;
    for(int i=1;i<=n;i++)
    {
        cin>>t;
        m[t].push_back(i);
    }
    for(auto it:m)
    {
        if ((it.second).size()==1)
            v.push_back({it.first,0});
        else
        {
            int p= (it.second)[1]-(it.second)[0];
            int j;
            for(j=1;j<it.second.size();j++)
            {
                if((it.second)[j]-(it.second)[j-1]!=p)
                    break;
            }
            if(j==it.second.size())
                v.push_back({it.first, p});
        }
    }
    cout<<v.size()<<"\n";
    for(auto it:v)
        cout<<it.first<<" "<<it.second<<"\n";
}