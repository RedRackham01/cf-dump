#include<bits/stdc++.h>
#define ll long long
using namespace std;
void testcase()
{
    ll a,b;
    cin>>a>>b;
    cout<<((a^(a&b))+(b^(a&b)))<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)
        testcase();
}