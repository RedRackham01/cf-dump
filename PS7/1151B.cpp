#include<bits/stdc++.h>
#define loop(i,n,x) for(int i=x;i<n;i++)
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n,m,ans=0;
    cin>>n>>m;
    int arr[n][m];
    loop(i,n,0)loop(j,m,0) cin>>arr[i][j];
    loop(i,n,0)
        ans^=arr[i][0];
    if(!ans)
    {
        int x=-1,y=0;
        loop(i,n,0)
            loop(j,m,1)
                if(arr[i][j]!=arr[i][0])
                { x=i; y=j;  break;}
        if(y>0)
        {
            cout<<"TAK"<<endl;
            loop(i,n,0) 
                cout<<((i==x)?(y+1):1)<<" ";
        }
        else
            cout<<"NIE"<<endl;
    }
    else
    {
        cout<<"TAK"<<endl;
        loop(i,n,0) cout<<1<<" ";
    }
}