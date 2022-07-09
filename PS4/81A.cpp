#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i=0;i<=s.length();i++)
    {
        if(i>=2 && s[i-1]==s[i-2])
            s.erase(i-=2,2);    
    }
    cout<<s;
    return 0;
}