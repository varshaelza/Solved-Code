#include<iostream>

using namespace std;

int large(int a)
{
  int big=0;
  for(int i=0;i<3;i++)
  {
    if(a%10>big)
    {
      big=a%10;
    }
    a=a/10;
  }
  return big;
}

int small(int a)
{
  int s=9;
  for(int i=0;i<3;i++)
  {
    if(a%10<s)
    {
      s=a%10;
    }
    a=a/10;
  }
  return s;
}

int main()
{
  int n,i,pair=0,l,s,val=0;
  cin>>n;
  int *a=new int[n];
  int *o=new int[10];
  int *e=new int[10];
  for(i=0;i<n;i++)
  {
    cin>>a[i];
    l=large(a[i]);
    s=small(a[i]);
    a[i]=(l*11+s*7)%100;
   
 	 if(i%2==0)
     {e[a[i]/10]++;
   
   
    }
    else
    {
     
    o[a[i]/10]++;
  
    }
    
  }

  
  for(i=0;i<10;i++)
  {
    val=0;
    if(o[i]==2)
    {
      val+=1;
      
    }
    
    else if(o[i]>2)
    {
      val=2;
    }
     if(e[i]==2)
    {
      if(val!=2)
      {
        val+=1;
      }
    }
    
    else if(e[i]>2)
    {
      if(val==0)
      {
        val+=2;
      }
    }
    pair+=val;
  }
  
  cout<<pair;
  return 0;
}
