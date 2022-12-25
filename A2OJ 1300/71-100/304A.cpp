#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n,c=0;
    cin>>n;
    double s;
    for(int a=1;a<n;a++)
    {
        for(int b=a;(a*a)+(b*b)<=(n*n);b++)
        {
            s=(a*a)+(b*b);
            if(int(sqrt(s))*int(sqrt(s))==s)
                c++;
        }
    }
    cout<<c;
}