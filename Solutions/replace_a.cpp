#include <iostream>
#include<cstring>
using namespace std;

int main() {
     char ab[101],c[3],ans[100];
     int k=0;
     cin>>ab;
     for(int i=0;i<strlen(ab);i++)
     {
        c[0]=ab[i];
        c[1]=ab[i+1];
        c[2]='\0';
      //  cout<<c;
        if(strcmp(c,"AA")==0||strcmp(c,"0A")==0)
        {
      //      cout<<"ddd"<<"\n";
            ab[i+1]='0';
        }    
   //  cout<<ab<<"\n";
     if(ab[i]!='0')
     {
         ans[k++]=ab[i];
     }
     }
     ans[k]='\0';
     cout<<ans;
     
    return 0;
}
