#include <iostream>

using namespace std;

int main() {
   int n,i;
    cin>>n;
   int *tot=new int[n];
   int *p=new int[n];
   float less=2.0;
   int l=-1;
   
   for(i=0;i<n;i++)
   {
       cin>>tot[i];
       cin>>p[i];
       if(less*1.0<=(p[i]*1.0/tot[i]))
       {
           continue;
       }
       else if(less*1.0>(p[i]*1.0/tot[i]))
       {
          // cout<<less<<" "<<(p[i]*1.0/tot[i])<<"\n";
           less=(p[i]*1.0/tot[i]);
           l=i;
       }
   }
   cout<<l+1;
   
    return 0;
}
