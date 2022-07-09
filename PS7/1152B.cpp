#include<bits/stdc++.h>
#define cond(x) bitset<32> (x+1).count()
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int x,t=0;
    vector<int> ans;
    cin>>x;
    int i=(int)log2(x);
    while(cond(x)>1)
    {
        if(!(x&(1<<i)))
        {
            ans.push_back(i+1);
            x^=(1<<(i+1))-1;
            t++;
            if(cond(x)<=1) break;
            x++;
            t++;
        }
        i--;    
    }
    cout<<t<<endl;
    if(t)
        for(auto i : ans)
            cout<<i<<" ";
}