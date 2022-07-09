#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;m>=i;m=m-i,i=1+i++%n);
    cout<<m;
    return 0;
}