#include<cstdio>
#include<iostream>
#include<sstream>
using namespace std;
int main()
{
    int n;  cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        int l=s.length();
        if(l<=10)
            cout<<s<<endl;
        else
            cout<<s[0]<<l-2<<s[l-1]<<endl;
    }
}