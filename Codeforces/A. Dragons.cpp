#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s,n;
    cin>>s>>n;
    pair<int,int>p[10000];
    for(int i=0; i<n; i++)
    {
        cin>>p[i].first>>p[i].second;
    }
    sort(p,p+n);
    int f=0;
    for(int i=0; i<n; i++)
    {
        if(s<p[i].first){
            f=1;
            break;
        }
        else{
            s+=p[i].second;
        }
    }

    if(f==1){
        cout<< "NO"<<endl;
    }
    else{
        cout<< "YES"<<endl;
    }
}
