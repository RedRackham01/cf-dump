#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n;
    cin>>n;
    int arr[n],a=0,b=n-1,f=1;;
    cin>>arr[0];
    for(int i=1;i<n;i++)
    {
        cin>>arr[i];
        if(f)
        {
            if((arr[i]<arr[i-1] && a==-1 && b==n-1)|| (arr[i]>arr[i-1] && a==-1))
                a=i-1;
            else if(arr[i]<arr[i-1] && b!=n-1) f=0;
            if(arr[i]>arr[i-1] && a!=-1 && b==n-1)
                b=i-1;
            if(b!=n-1 && arr[a]>arr[b+ 1]) f=0;
            cout<<a<<" "<<b<<endl;
        }
    }
    if(f)
        cout<<"yes\n"<<a+1<<" "<<b+1;
    else 
        cout<<"no";
} 