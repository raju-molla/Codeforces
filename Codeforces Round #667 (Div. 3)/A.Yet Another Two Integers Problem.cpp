#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int s=abs(a-b);
        if(s%10){
            int ans=s/10;
            cout<<ans+1<<endl;
        }
        else{
            cout<<s/10<<endl;
        }
    }
}
