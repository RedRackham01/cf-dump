#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int k;
    string s;
    cin>>k>>s;
    map<char,int> m;
    for(int i=0;i<s.length();i++) m[s[i]]++;
    for(auto it : m)
        if(it.second%k!=0)
        {
            cout<<-1; return 0;
        }
    for(int i=0;i<k;i++)
    {
        for(auto it : m)
            for(int j=0;j<it.second/k;j++)
                cout<<it.first;
    }
}