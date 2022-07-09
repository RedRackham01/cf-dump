#include<bits/stdc++.h>
using namespace std;
int main()
{
    string para,ban,w;
    getline(cin,para);
    getline(cin,ban);
    for(int i=0;i<para.size(); i++)
    {
        if (ispunct(para[i]))
        {
            para[i]=' ';
        }
        else 
            para[i]=tolower(para[i]);
    }
    set<string> bn;
    map<string,int> words;
    stringstream ss(para);
    stringstream sbn(ban);
    while(sbn>>w )
        bn.insert(w);
    while(ss>>w)
        if(bn.find(w)==bn.end())
        words[w]++;
    int max=0;
    for(auto it:words)
    {   
        if(it.second>max)
        {
            max=it.second;
            w=it.first;
        }
    }   
    cout<<w; 
    return 0;
}