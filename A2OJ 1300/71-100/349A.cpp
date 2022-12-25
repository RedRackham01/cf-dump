#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n, t, r25=0,r50=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        if(t==25)
            r25++;
        else if (t==50)
        {
            if(r25>=1)
            {
                r25--;r50++;
            }
            else
            {
                cout<<"NO";
                return 0;
            }
        }
        else if(t==100)
        {
            if(r50>=1 && r25>=1)
            {
                r25--; r50--;
            }
            else if(r50==0 && r25>=3)
                r25-=3;
            else
            {
                cout<<"NO";
                return 0;
            }
        }
    }
    cout<<"YES";
}