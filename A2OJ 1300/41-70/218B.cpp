#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    int a[m];
    for(int i=0;i<m;i++) cin>>a[i];
    int min=0,max=0,b[m];
    copy(a,a+m,b);
    for(int i=0;i<n;i++)
    {
        int l=0;
        sort(a,a+m);
        sort(b,b+m);
        max+=a[m-1]--;
        while(b[l]==0) l++;
        min+=b[l]--;
    }
    cout<<max<<" "<<min;
}