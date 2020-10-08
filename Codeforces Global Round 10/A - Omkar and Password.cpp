#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>v,v2;
        for(int i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        if(v.front()==v.back())cout<< n<<endl;
        else{
            cout<< "1"<<endl;
        }
    }

}
