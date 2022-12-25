#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    map<char,int> m;
    for(int i=0;i<s1.length();i++)
        m[s1[i]]++;
    for(int i=0;i<s2.length();i++)
    {
        if(isalnum(s2[i]))
        {
            if(m[s2[i]]==0)
            {
                cout<<"NO"; return 0;
            }
            else
                m[s2[i]]--;
        }
    }
    cout<<"YES";
}