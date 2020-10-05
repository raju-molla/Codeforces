#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a;
        cin>>a;
        if(a%2==0){
            long long int res=floor(a/2);
            cout<<res-1<<endl;
        }
        else{
            cout<< (a/2)<<endl;
        }
    }
}
