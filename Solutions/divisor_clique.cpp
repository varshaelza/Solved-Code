#include <iostream>
#include<algorithm>

using namespace std;

int main() {
    int n,i,j,c=1,co=0;
    cin>>n;
    int *a=new int[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
 /*  for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }*/
    for(int k=n-1;k>0;k--)  
   { 
       j=k;
       c=1;
       for(i=j-1;i>=0;i--)
    {   
        if(a[j]%a[i]==0)
        {
            c++;
            j=i;
        }
     
    }
    if(co<c)
    {
        co=c;
    }
   }
   
   cout<<co;
    
    return 0;
}
