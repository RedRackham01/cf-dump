#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n,c=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=1;i<s.length();)
    {
        if(s[i]==s[i-1])
        {
            s.erase(s.begin()+i);
            c++;
        }
        else    i++;
    }
    cout<<s<<"\n"<<c;
}