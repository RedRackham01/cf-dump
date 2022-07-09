#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,mid,c=1;
    cin>>n>>k;
    long long arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    mid=n/2;
    for(int i=mid+1;i<n;i++)
    {
        if(arr[mid]==arr[i])
        {
            c++; continue;
        }
        else
        {
            long long x=c*(arr[i]-arr[mid]);
            if(x<=k)
            {
                k-=x;
                arr[mid]=arr[i];
                c++;
            }
            else {
				arr[mid]+=k/c;
				k = 0;
				break;	
			}
		}
		if(c>k) break;
	}	 
	if (c<=k) {
		arr[mid]+=k/c;
	} 
	cout<<arr[mid];
	return 0;
}