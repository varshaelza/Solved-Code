#include <iostream>
#include<algorithm>
using namespace std;

int main() {
   int n,s=0,i;
   cin>>n;
   int*a=new int[n];
   int *b=new int[n];
   for(i=0;i<n;i++)
   {
       cin>>a[i]>>b[i];
       if(a[i]>b[i])
       {
           int d=a[i];
           a[i]=b[i];
           b[i]=d;
       }
   }
   sort(a,a+n);
   sort(b,b+n);
   for(i=0;i<n;i++)
   {
       if(i<n/2)
       {
           s+=(i+1)*(a[i+1]-b[i]);
           //cout<<s<< " ";
        }
        else if(i>n/2)
        {
             s+=(a[i]-b[i-1]);
           a[i]=a[i]-(a[i]-b[i-1]);
           b[i]=b[i]-(a[i]-b[i-1]);
          // cout<<s<<" ";
        }
        
   }
   
cout<<s;
   
   
    return 0;
}
