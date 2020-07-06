#include <iostream>

using namespace std;

int main() {
   int n,r,k,i;
   cin>>n>>r>>k;
   int maxr=r,maxb=n-r,minb=n-r,minr=r;
   for(i=0;i<k;i++)
   {
       if(maxb>0)
       {
           maxr++;
           maxb--;
       }
       else
       {
           maxr--;
       }
       
       if(minb!=n)
       {
           minr--;
           minb++;
       }
       else
       {
        minr++;   
       }
       
   }
   cout<<minr<<" "<<maxr;
   
   
    return 0;
}
