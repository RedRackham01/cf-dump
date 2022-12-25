#include<cstdio>
#include<iostream>
using namespace std;
int Prime(int x)
{
    for(int i=2;i<=x/2;i++)
        if(x%i==0)
            return 0;
    return 1;
}
int main()
{
    int n,m;
    cin>>n>>m;
    int i;
    for(i=n+1;Prime(i)==0;i++);
    if(i==m)
        cout<<"YES";
    else
        cout<<"NO";    
    return 0;    
}