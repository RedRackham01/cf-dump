#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t,sx,sy,ex,ey,c=0;
    cin>>t>>sx>>sy>>ex>>ey;
    string s;
    cin>>s;
    for(int i=0;i<t && (sx!=ex || sy!=ey);i++)
    {
        c++;
        if(s[i]=='N' && sy<ey) sy++;
        else if(s[i]=='S' && sy>ey) sy--;
        else if(s[i]=='E' && sx<ex) sx++;
        else if(s[i]=='W' && sx>ex) sx--;
    }
    if(sx!=ex || sy!=ey)
        cout<<-1;
    else
        cout<<c;
}