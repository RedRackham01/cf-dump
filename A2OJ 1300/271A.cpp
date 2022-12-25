#include<cstdio>
#include<iostream>
using namespace std;
int dist(int x)
{
    string s=to_string(x);
    for(int i=0;i<s.length();i++)
    {
        for(int j=i+1;j<s.length();j++)
        if(s[j]==s[i])
            return 0;
    }
    return 1;
}
int main()
{
    int y;
    cin>>y;
    for(int i=y+1;;i++)
    {
        if(dist(i)==1)
        {
            cout<<i;
            return 0;
        }
    }
}