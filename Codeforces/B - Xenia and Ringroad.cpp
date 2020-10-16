#include<bits/stdc++.h>
using namespace std;
int k=1;
long long int ct=0;
void solve(int a, int n)
{
    if(k<=a){
        ct+=abs(k-a);
        k=a;
    }
    else{
        ct+=abs(k-n)+abs(1-a)+1;
        k=a;
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>v(m);
    for(int i=0; i<m; i++)
    {
        cin>>v[i];
    }
    for(int i=0; i<m; i++)
    {
        solve(v[i],n);
    }
    cout<<ct;
}
