#include <iostream>
#include<cmath>
using namespace std;

int main() {
   int n,m,c=0,i,j;
   int a1,a2;
   int b1,b2;
   cin>>n>>m>>a1>>a2>>b1>>b2;
   for(i=1;i<=n;i++)
   {
       for(j=1;j<=m;j++)
       {
           int d1=abs(a1-i)+abs(a2-j);
           int d2=abs(b1-i)+abs(b2-j);
          if(d1==d2) 
          {
              //cout<<i<<j<<"\n";
              c++;
          }}
   }
   cout<<c;
}
