#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n,ar[5][5]={{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1}};
    for(int i =1;i<=3;i++)
    {
        for(int j=1;j<=3;j++)
        {
            cin>>n;
            if(n%2!=0)
            {
                ar[i][j]*=-1;
                ar[i+1][j]*=-1;
                ar[i][j+1]*=-1;
                ar[i-1][j]*=-1;
                ar[i][j-1]*=-1;                
            }
        }
    }
    for(int i =1;i<=3;i++)
    {
        for(int j=1;j<=3;j++)
            cout<<(ar[i][j]==1)? 1 : 0;
        cout<<"\n";
    }
}