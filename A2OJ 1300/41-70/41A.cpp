#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    string a,b;
    cin>>a>>b;
    reverse(b.begin(),b.end());
    if(a==b) cout<<"YES";
    else cout<<"NO";
}