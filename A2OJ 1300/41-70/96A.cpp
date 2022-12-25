#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    string s;
    cin>>s;
    int c=1;
    for(int i=1;i<s.length();i++)
    {
        if(s[i]==s[i-1])
            c++;
        else c=1;
        if(c==7)
        {
            cout<<"YES"; return 0;
        }
    }
    cout<<"NO";
}