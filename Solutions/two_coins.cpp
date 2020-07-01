#include <iostream>

using namespace std;

int main() {
   int n,i,c=0,j;
   cin>>n;
   int *v=new int[n];
   int *count=new int[21];
   for(i=0;i<n;i++)
   {
       cin>>v[i];
       for(j=i-1;j>=0;j--)
       {
           if(count[v[i]+v[j]]!=0)
           {
                count[v[i]+v[j]]++;
                
           }
           else
           {
               count[v[i]+v[j]]++;
               c++;
           }
           // cout<< v[i]+v[j]<<" "<< count[v[i]+v[j]]<<" "<<c<<"\n";
          
       }
   }
   cout<<c;
    return 0;
}
