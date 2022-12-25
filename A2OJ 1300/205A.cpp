#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n;
    cin>>n;
    int ar[n];
    cin>>ar[0];
    int min=ar[0],c=1,j=0;
    for(int i=1;i<n;i++)
    {
        cin>>ar[i];
        if(ar[i]==min)
            c++;
        else if(ar[i]<min)
        {
            c=1;
            min=ar[i];
            j=i;
        }
    }
    if(c-1)
        cout<<"Still Rozdil";
    else
        cout<<j+1;

}