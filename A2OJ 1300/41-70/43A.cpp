#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n;
    cin>>n;
    map<string,int> m;
    string s;
    while(n--)
    {   
        cin>>s;
        m[s]++;
    }
    for(auto it : m)
    {
        if(it.second>n)
        {
            s=it.first;
            n=it.second;
        }
    }
    cout<<s;
}