#include <iostream>
#include<algorithm>

using namespace std;

int main() {
   int n,m,i;
   cin>>n>>m;
   int *a=new int[n];
   int *b=new int[m];
   int c[2]={0,0};
   
   for(i=0;i<n;i++)
   {
       cin>>a[i];
   }
   sort(a,a+n);
    for(i=0;i<m;i++)
   {
       cin>>b[i];
   }
   sort(b,b+m);
   for(i=0;i<n&&i<m;i++)
   {
       if(a[n-1-i]>b[m-1-i])
       {
           c[0]++;
       }
       else
       {
           c[1]++;
       }
   }
   cout<<c[0]<<" "<<c[1];
    return 0;
} 
