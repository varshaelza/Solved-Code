#include <iostream>
#include<algorithm>


using namespace std;

int main() {
    int n,i,s=0,ans=0;
      cin>>n;
    int *a=new int[n];
    int min=101,max=0;
    
  
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>max)
        {
            max=a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
        }
        s+=a[i];
       
    }
    //cout<<max<<" "<<min<<" "<<s<<" " ;
    s-=max;
    s-=min;
   // cout<<s<<" ";
   s=s/(n-2);
   //cout<<s<<"\n";
   sort(a,a+n);
   for(i=1;i<n-1;i++)
   {
       if(a[i]<=s)
       {
           ans=a[i];
       }
       else
       {
           break;
       }
   }
   
   cout<<ans;
    
    return 0;
}
