#include<bits/stdc++.h>
using namespace std;
int islucky(string s)
{
   
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!='4' && s[i]!='7')
            return 0;
    }
    return 1;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    long long n;
    int c=0;
    cin>>n;
    string s=to_string(n);
    for(int i=0;i<s.length();i++)
        if(s[i]=='4' || s[i]=='7')
            c++;
    if(islucky(to_string(c)))
        cout<<"YES";
    else cout<<"NO";
}