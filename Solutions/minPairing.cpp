#include <iostream>
#include<algorithm>

using namespace std;

int main() {
   int n,sum=0,i;
   cin>>n;
   int *a=new int[n];
   for(i=0;i<n;i++)
   {
       cin>>a[i];
   }
   sort(a,a+n);
   for(i=0;i<n;i=i+2)
   {
       sum+=a[i+1]-a[i];
   }
   cout<<sum;
}
