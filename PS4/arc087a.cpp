#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
    map<int,int> arr;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(arr.count(a)==0)
            arr[a]=1;
        else 
            arr[a]++;
    }
    map<int, int>::iterator itr;
    for(itr=arr.begin();itr!=arr.end();itr++)
    {
        if(itr->first<itr->second)
            c+=itr->second-itr->first;
        else if(itr->first>itr->second)
            c+=itr->second;          
    }
    cout<<c;
}