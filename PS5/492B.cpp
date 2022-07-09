#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l;
    cin>>n>>l;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin>>arr[i];
    sort(arr, arr+n);
    int m=max(arr[0],l-arr[n-1])*2;
    for (int i = 1; i < n; i++)
        m=max(m,arr[i]-arr[i-1]);
    printf("%.10f",m/2.0);    
    return 0;
}