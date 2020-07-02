#include <iostream>

using namespace std;

int main() {
   int n,m,i,co=0,j;
   cin>>n>>m;
   int *a=new int[n];
   int*b=new int[m];
   for(i=0;i<n;i++)
   {
       cin>>a[i];
       if(a[i]==0)
       {
           a[i]=1;
       }
       else
       {
           a[i]=0;
       }

   }
  
     for(i=0;i<m;i++)
   {
       cin>>b[i];
   }
   
   for(i=0;i<m-n+1;i++)
   {
       int f=0;
     for(j=0;j<n;j++)
     {
         if(a[j]!=b[i+j])
         {
             f=1;
             break;
         }
     }
     if(f==0)
     {
        // cout<<i;
         co++;
     }
   }
   cout<<co;
    return 0;
    
}
