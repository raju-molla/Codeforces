#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n==1){
            cout<< "1"<<endl;
        }
        else if(n==2){
                cout<< "2 1"<<endl;
        }
        else if(n==3){
            cout<< "3 1 2"<<endl;
        }
        else{
            if(n%2==0){
                for(int i=2; i<=n; i+=2)
                {
                    cout<< i<< " ";
                }
                for(int i=1; i<n; i+=2)
                {
                    cout<<i<< " ";
                }
            }
            else{
                for(int i=n-1; i>0; i-=2){
                    cout<< i<< " ";
                }
                for(int i=n; i>0; i-=2){
                    cout<<i<< " ";
                }
            }
            cout<<endl;
        }
    }
}
