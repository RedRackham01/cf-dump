#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string v="aeiouyAEIOUY";
    for(int i=0;i<s.length();i++)
    {
        char ch=s[i];
        if(v.find(ch)==string::npos)
            cout<<"."<<char(tolower(ch));
    }
    return 0;
}