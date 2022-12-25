#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    string s;
    cin>>s;
    int c=0;
    for(int i=0;i<s.length();i++)
    {
        if(c==0 && i==s.length()-1 && s[i]=='1') break;
        cout<<s[i];
        if(c==0 && s[i]=='1' && s[i+1]=='0') 
        {
            i++; c++;
        }
        if(c==0 && i==s.length()-1) break; 
    }
}