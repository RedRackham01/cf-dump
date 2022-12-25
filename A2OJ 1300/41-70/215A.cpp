#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int m,max=0,c=0;
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
        for(int j=0;j<n;j++)
        {
            if(b[i]%a[j]==0 && b[i]/a[j]>max)
            {
                max=b[i]/a[j];
                c=1;
            }
            else if(b[i]%a[j]==0 && b[i]/a[j]==max)
                c++;
        }
    }
    cout<<c;
}