#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    int x=arr[0];
    for(int i=1;i<n;i++)
        if(arr[i]>x)
        {
            x=arr[i];
            break;
        }    
    if(x!=arr[0])
        cout<<x;
    else
        cout<<"NO";
    return 0;
}