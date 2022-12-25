#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll ab,bc,ca,a,b,c;
    cin>>ab>>bc>>ca;
    ll abc = sqrt(ab*bc*ca);
    a=abc/bc;
    b=abc/ca;
    c=abc/ab;
    cout<<4*(a+b+c);
}
