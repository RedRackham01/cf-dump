#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    string s;
    cin>>s;
    map<char,int> m;
    for(int i=0;i<s.length();i++) m[s[i]]++;
    int c=0;
    for(auto it:m)
    {
        if(it.second%2!=0) c++;
    }
    if(c==0 || (c-1)%2==0)cout<<"First";
    else cout<<"Second";
}