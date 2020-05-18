#include <bits/stdc++.h>

using namespace std;
int main() {
   int n,z=0,r=0,f=0,i;
   int*a=new int[10];
   cin>>n;
   int dup=n;
   if(n==0)
   {
       a[0]++;
   }
   while(dup!=0)
   {
       r=dup%10;
       dup/=10;
       if(dup==0&&r==0)
       {a[0]++;}
       a[r]++;
      }
      
      int q=a[0];
      for(i=1;i<10;i++)
      {
          if(a[i]!=q)
          {
              f=1;
              break;
          }
          
      }
      if(f==0)
      {
          cout<<z+1;
      }
      else
      {
          cout<<z;
      }
  return 0;   
}