#include <iostream>
#include<algorithm>
#include<cstring>

using namespace std;

int main() {
   int n,i,big=0,c=1,j;
   cin>>n;
   char *word[n];
   for(i=0;i<n;i++)
   {
       word[i]=new char[10000];
       cin>>word[i];   
       sort(word[i],word[i]+strlen(word[i]));
       c=1;

       for(j=i-1;j>=0;j--)
       {
           if(strcmp(word[i],word[j])==0)
           {
               c++;
             
           }
       }
       if(c>big)
       {
           big=c;
       }
   }
   
   cout<<big;
   
   
}
