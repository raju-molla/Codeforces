#include<bits/stdc++.h>
using namespace std;

bool tr(int a,int b, int c){
    return((a+b>c) && (a+c>b) && (c+b>a));
}

bool sg(int a, int b, int c)
{
    return ((a+b==c) || b+c==a || a+c==b);
}
int main()
{
   int a,b,c,d;
   cin>>a>>b>>c>>d;
   bool Triangle=false;
   bool Segment=false;
   Triangle =Triangle || (tr(a,b,c));
   Triangle =Triangle ||(tr(a,b,d));
   Triangle =Triangle ||(tr(a,c,d));
   Triangle =Triangle ||(tr(b,c,d));

   Segment =Segment ||(sg(a,b,c));
   Segment =Segment ||(sg(a,b,d));
   Segment= Segment ||(sg(a,c,d));
   Segment =Segment ||(sg(b,c,d));
   if(Triangle){
       cout<< "TRIANGLE"<<endl;
   }
   else if(Segment){
       cout<< "SEGMENT"<<endl;
   }
   else{
       cout<< "IMPOSSIBLE"<<endl;
   }

   
}
