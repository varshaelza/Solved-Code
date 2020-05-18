#include <iostream>
#include<algorithm>
#include<cmath>

using namespace std;

int main() {
   int n,k,i,s=0;
   cin>>n>>k;
   int *a=new int[n];
   for(i=0;i<n;i++)
   {
       cin>>a[i];
   }
   sort(a,a+n);
 
   for(i=0;i<k;i++)
   {
       s+=a[i];
   }
   cout<<ceil((s/100.0));
}