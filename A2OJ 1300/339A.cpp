#include <vector>
#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;
int main()
{
    string str;
    cin>>str;
    stringstream ss(str);
    char ch;
    vector<int> arr;
    int num;
    while(ss>>num)
    {
        arr.push_back(num);
        ss>>ch;
    }
    sort(arr.begin(),arr.end());
    int i;
    for(i=0;i<arr.size()-1;i++) 
        cout<<arr[i]<<"+";
    cout<<arr[i];
    return 0;
}