#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    set<char>st;
    for(int i=0; i<s.size(); i++)
    {
        char c=s[i];
        if(c>='a' && 'z'>=c){
            st.insert(c);
        }
    }
    
    cout<<st.size()<<endl;
}
