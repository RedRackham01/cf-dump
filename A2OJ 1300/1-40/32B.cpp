#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='.')
            cout<<0;
        else if(s[i]=='-')
        {
            i++;
            if(s[i]=='.')
                cout<<1;
            else
                cout<<2;    
        }  
    }
    return 0;
}