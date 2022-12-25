#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    string s; int c=0;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if((i+2)<s.length() && s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
        {
            i+=2;
            if(c==1) cout<<" ";
        }
        else
        {
            c=1;
            cout<<s[i];
        }
    }
}