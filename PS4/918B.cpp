#include<cstdio>
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<string> arr[2];
    for(int i=0;i<n+m;i++)
    {
        string nam,ip;
        cin>>nam>>ip;
        arr[0].push_back(nam);
        arr[1].push_back(ip);
    }
    for(int i=n;i<n+m;i++)
    {
        cout<<arr[0][i]<<" "<<arr[1][i]<<" #";
        for(int j=0;j<n;j++)
            if(arr[1][i]==arr[1][j]+";")
            {
                cout<<arr[0][j]<<endl; break;
            }
    }
    return 0;
}