#include<bits/stdc++.h>
using namespace std;
void testcase()
{
    string s1,s2;
    cin>>s1>>s2;
    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());
    cout<<(s1.find('1',s2.find('1'))-s2.find('1'))<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--)
        testcase();
}