#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int g[6][6];
    for(int i=1;i<=5;i++)
        for(int j=1;j<=5;j++)
            cin>>g[i][j];
    int p[6]={1,2,3,4,5};
    int temp=0,max=0;
    do
    {
        temp=g[p[0]][p[1]]+g[p[1]][p[0]]+g[p[1]][p[2]]+g[p[2]][p[1]]; 
        temp+=2*(g[p[2]][p[3]]+g[p[3]][p[2]]+g[p[3]][p[4]]+g[p[4]][p[3]]);
        if(temp>max)
            max=temp;
    } while (next_permutation(p,p+5));
    cout<<max;
}