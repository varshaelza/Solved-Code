#include <iostream>


using namespace std;

int main() {
   int n,i,j,c=0;
   cin>>n;
   int *l=new int[n];
    int *r=new int[n];
   for(i=0;i<n;i++)
   {
      cin>>l[i];
      cin>>r[i];
       
   }
   
   
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
           if(l[i]<l[j]&&r[i]>r[j])
           {
               //cout<<i<<" "<<l[j]<<" "<<r[j]<<"\n";
               c++;
               l[j]=-1;
               r[j]=-1;
               
           }
       }
   }
   cout<<c;
   
    return 0;
}
