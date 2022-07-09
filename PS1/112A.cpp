#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int cmp=0;
    string s1,s2;
    cin>>s1>>s2;
    for(int i=0;i<s1.length();i++)
    {
        if(tolower(s1[i])-tolower(s2[i])>0)
        {
            cmp=1;
            break;
        }
        else if(tolower(s1[i])-tolower(s2[i])<0)
        {
            cmp=-1;
            break;
        }
    }
    cout<<cmp;
    return 0;
}