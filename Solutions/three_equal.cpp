#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    int n,i,cost;
    cin>>n;
    int *a=new int[n];
    int *c=new int[3];
    for(i=0;i<n;i++)
    {
       cin>>a[i]; 
       c[a[i]]++;
    }
   //int max=c[0]>c[1]?(c[0]>=c[2]?0:2):(c[1]>c[2]?1:2);
   cout<<c[0]<<" "<<c[1]<<" "<<c[2]<<"\n";
   int max=max_element(c,c+3)-c;
   //cout<<max;
   cost=c[(max+1)%3]*2+c[(max+2)%3]*1;
   cout<<cost;
   
    
    return 0;
}
