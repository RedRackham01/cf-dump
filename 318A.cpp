#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    long long int n,k;
    cin>>n>>k;
    long long int half=n/2 + (n%2);
    if(k>half)
        cout<<(k-half)*2;
    else
        cout<<(k*2-1);
    return 0;
}