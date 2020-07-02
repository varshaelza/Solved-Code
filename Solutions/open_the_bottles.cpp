#include <iostream>
#include<algorithm>

using namespace std;

int main() {
   int *a=new int[3];
   int s=0;
   for(int i=0;i<3;i++)
   {
       cin>>a[0]>>a[1]>>a[2];
       sort(a,a+3);
       s+=a[0];
      // cout<<a[0]<<" ";
       
   }
   
   cout<<s;
   return 0;
}
