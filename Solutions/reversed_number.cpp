#include <iostream>

using namespace std;

int main() {
   int n,i;
   cin>>n;
 
   int d=10,e=10;
   for(i=0;i<8;i++)
   {    
       if(n/d==0)
       {
            break;
       }
       
       
     d=d*10;
   }
   if(d==10)
   {
       cout<<0;
       return(0);
   }
   
   d=d/10;
   
   label1:if(((n/d)%10)<((n%e)/(e/10)))
   
   {
      // cout<<((n/d)%10)<<((n%e)/(e/10))<<"hh\n";
       cout<<1;
   }
   else if(((n/d)%10)>((n%e)/(e/10)))
   
   {
      // cout<<d<<e;
       // cout<<((n/d)%10)<<((n%e)/(e/10))<<"ll\n";
       cout<<0;
   }
   else
   {
       if(d==e||e>d)
       {
           cout<<0;
           return 0;
       }
       d=d/10;
       e=e*10;
       goto label1;
   }
   
  
    return 0;
}
