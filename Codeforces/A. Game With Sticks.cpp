#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cin>>m>>n;
    int i=1;
    int c=0;
    while(1){
        if(m-i==0)break;
        if(n-i==0)break;
        i++;
        c++;
    }
    if(c%2==0){
        cout<< "Akshat"<<endl;
    }
    else{
        cout<< "Malvika"<<endl;
    }
}
