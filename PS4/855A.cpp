#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        string s="NO";
        for(int j=0;j<i;j++)
        {
            if(arr[i]==arr[j])
                s="YES";
        }
        cout<<s<<endl;
    }  
    return 0;
}