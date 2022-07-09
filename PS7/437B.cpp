#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int sum,limit;
    cin>>sum>>limit;
    vector<int> ans;
    while(limit && sum>0)
    {
        int lb=limit&(-limit);
        if(lb<=sum)
        {
            ans.push_back(limit);
            sum-=lb;
        }
        limit--;
    }
    if(sum)
        cout<<-1;
    else
    {
        cout<<ans.size()<<endl;
        for(auto i : ans)
            cout<<i<<" ";
    }
}