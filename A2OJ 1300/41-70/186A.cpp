#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    string s1,s2;
    cin>>s1>>s2;
    if(s1.length()!=s2.length())
        cout<<"NO";
    else
    {
        int c=0,j=0; char a[2], b[2];
        for(int i=0;i<s1.length();i++)
        {
            if(s1[i]!=s2[i])
            {
                c++;
                if(c>2)
                {
                    cout<<"NO";
                    return 0;
                }
                a[j]=s1[i];
                b[j]=s2[i];
                j++;
            }
        }
        if(a[0]==b[1] && a[1]==b[0])
            cout<<"YES";
        else
        cout<<"NO";
    }
}