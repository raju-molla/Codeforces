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
        if(a<b){
            cout<<b-a<<endl;
        }
        else if(a%b==0){
            cout<<a%b<<endl;
        }
        else{
            int r=a%b;
            int p=a/b;
            int A=(++p)*b;
            cout<<A-a<<endl;
        }





    }
}
