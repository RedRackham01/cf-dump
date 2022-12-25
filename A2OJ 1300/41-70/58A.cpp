#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    string s,t="hello";
    cin>>s;
    int i;
    for(i=0;i<5 && i<s.length();)
    {
        if(s[i]!=t[i])
            s.erase(s.begin()+i);
        else
            i++;
    }
    if(i==5) cout<<"YES";
    else cout<<"NO";
}