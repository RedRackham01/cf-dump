#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    vector<string> v(4);
    for(int i=0;i<4;i++)
        cin>>v[i]; 
    bool check = false;
    for(int i=0;i<3;i++)
    {
        
        for(int j=0;j<3;j++)
        {
            int c=0;
            for(int a=0;a<2;a++)
            {
                for(int b=0;b<2;b++)
                {
                    if(v[i+a][j+b]=='#')
                        c++;
                }
            }    
            if(c!=2)
            {
                check =true; break;
            }
        }
    }
    cout<<(check ? "YES" : "NO");
}