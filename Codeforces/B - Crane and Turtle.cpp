#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    if(a==1){
        cout<<2<<endl;
    }
    else{
        if(a%2==0){
            int p=a/2;
            int q=p*2;
            int r=p*4;
            if((q+r)==b){
                cout<< "Yes"<<endl;
            }
            else{
                cout<< "No"<<endl;
            }
        }
        else{
            int p=a/2;
            int q=(p+1)*2;
             int r=p*4;
            if((q+r)==b){
                cout<< "Yes"<<endl;
            }
            else{
                cout<< "No"<<endl;
            }
        }
    }
}
