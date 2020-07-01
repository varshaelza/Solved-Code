#include <iostream>
#include<cmath>

using namespace std;
 int r,c;

void rowswap(int a[][50],int i)
{
    
    for(int j=0;j<c;j++)
    {
        if(a[i][j]==0)
        {
            a[i][j]=1;
        }
        else if(a[i][j]==1)
        {
            a[i][j]=0;
        }
    }
}

void colswap(int a[][50],int i)
{
    for(int j=0;j<r;j++)
    {
        if(a[j][i]==0)
        {
            a[j][i]=1;
        }
        else
        {
            a[j][i]=0;
        }
    }
}

int colsum(int a[][50],int i)
{
    int s=0;
    for(int j=0;j<r;j++)
    {
        s+=a[j][i];
    }
    return s;
}


int main() {
   int i,j,d;
    cin>>r>>c;
    int a[50][50];
    for(i=0;i<r;i++)
    {
        
        for(j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    
    
   for(i=0;i<r;i++)
   {
       if(a[i][0]==0)
       {
           rowswap(a,i);
           
       }
   }
   
   for(i=1;i<c;i++)
   {
       d=colsum(a,i);
       if(c-d>d)
       {
           colswap(a,i);
       }
   }
   
   long long s=0;
   /* for(i=0;i<r;i++)
   {
       for(j=0;j<c;j++)
       {
          cout<<a[i][j]<<" ";
       }
       cout<<"\n";
   }*/
   for(i=0;i<r;i++)
   {
       for(j=0;j<c;j++)
       {
           long long p=pow(2,c-j-1);
           long long ans=(a[i][j]*p);
           s+=ans;
       }
   }
   cout<<s;
    
    
}
