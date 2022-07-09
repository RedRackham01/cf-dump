#include<cstdio>
#include<iostream>
#include<set>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0;
        cin>>n;
        set<int> s;
        for(int i=0;i<n;i++)
        {
            int b;
            cin>>b;
            if(s.count(b))
                c=1; 
            s.insert(b);
            
        }
    if(c==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;    
    }    
    return 0;
}