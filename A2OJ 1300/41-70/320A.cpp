#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='1')
        {
            if((i+1)<s.length() && s[i+1]=='4')
            {
                i++;
                if((i+1)<s.length() && s[i+1]=='4')
                    i++;
            }
        }
        else
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";

}