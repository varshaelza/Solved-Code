#include<iostream>

using namespace std;
int count(int l,int w)
{
  int c=0;
  while(l>0&&w>0)
        {
          if(l>w)
          {
            l=l-w;
            c++;
          }
          else if(w>l)
          {
            w=w-l;
            c++;
          }
          else if(l==w)
          {
            l=0;
            w=0;
            c++;
          }
        }
  return c;
}

        

int  main()
{
  int ln,lx,wn,wx,c=0,i,j;
  cin>>ln>>lx>>wn>>wx;
  for(i=ln;i<=lx;i++)
  {
    for(j=wn;j<=wx;j++)
    {
      c+=count(i,j);
    }
  }
  
  cout<<c;
  return 0;
}

        
