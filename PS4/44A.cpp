#include<cstdio>
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
    vector<string> arr[2];
    for(int i=0;i<n;i++)
    {
        string name,colour;
        cin>>name>>colour;
        arr[0].push_back(name);
        arr[1].push_back(colour);
        c++;
        for(int j=i-1;j>=0;j--)
        {
            if(arr[0][j]==arr[0][i] && arr[1][j]==arr[1][i])
            {
                c--;
                break;
            }    
        }
    }
    cout<<c;
    return 0;
}