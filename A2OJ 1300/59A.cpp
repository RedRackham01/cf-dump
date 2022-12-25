#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    string s;
    cin>>s;
    int u,l; 
    u=l=0;
    for(int i=0;i<s.length();i++)
    {
        if(isupper(s[i]))
            u++;
        else
            l++;
    }
    if(u>l)
        transform(s.begin(),s.end(),s.begin(),::toupper);
    else   
        transform(s.begin(),s.end(),s.begin(),::tolower);
    cout<<s;
}