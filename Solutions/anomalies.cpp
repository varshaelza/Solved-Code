#include <iostream>

using namespace std;

int main() {
   int n,k,i,j;
   cin>>n>>k;
   int a[101][101];
   for(i=1;i<=n;i++)
   {
       cin>>a[0][i];
       a[i][0]=a[0][i];
   }
   
   int c=0,f=0;
   for(i=1;i<n+1;i++)
   {
       
       f=0;
       for(j=1;j<n+1;j++)
       {
           a[i][j]=abs(a[0][j]-a[i][0]);
           if(a[i][j]<=k&&i!=j)
           {
               f=1;
              
               break;
           }
       }
       if(f==0)
       {
           c++;
       }
   }
  /* for(i=0;i<=n;i++)
   {
       for(j=0;j<=n;j++)
       {
           cout<<a[i][j]<<" ";
       }
       cout<<"\n";
   }*/
   cout<<c;
    return 0;
}
