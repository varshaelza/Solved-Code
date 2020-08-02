#include<iostream>
using namespace std;

int main()
{
  int n,i,j,count,f=0;
  cin>>n;
  count=n;
  char *bride=new char[n];
  char *groom=new char[n];
  cin>>bride;
  cin>>groom;
  for(i=0;bride[i]!='\0';i++)
  {
    f=0;
    for(j=0;groom[j]!='\0';j++)
    {
      if(bride[i]==groom[j])
      {
        groom[j]='x';
        f=1;
        break;
        
      }
    }
    if(f==1)
    {
      count--;
    }
    else
    {
      break;
    }
  }
  cout<<count;
  return 0;
}
    
