#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    /*we execute half soldiers in each turn,
    if less then win not possible
    if more then max death case not achieved*/
    cout<<(3*n/2);
    return 0;
}