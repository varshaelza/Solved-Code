#include<iostream>
using namespace std;

int hcf(int a,int b)
{
    int h=1;
    if(a==0)
    {
        return b;
    }
   if(b==0)
   {
       return a;
   }
    if(a>=b)
    {
        h=hcf(a%b,b);
    }
    else
    {
        h=hcf(a,b%a);
    }
    return h;
}

int main()
{
    int a,b,i,j;
    cin>>a>>b;
    int h=hcf(a,b);
    cout<<h<<"\n";
    int *fac=new int[h+1];
    fac[1]=1;
    fac[2]=2;
    fac[3]=2;
    for(i=4;i<=h;i++)
    {
        for(j=i-1;j>=1;j--)
        {
            if(i%j==0&&j==1)
            {
                fac[i]=2;
                break;
            }
            else if(i%j==0&&(j%(i/j))==0)
            {
                fac[i]=fac[j]+1;
                break;
            }
            else if(i%j==0)
            {
                fac[i]=fac[j]+fac[i/j];
                break;
            }
        }
    }
    
    cout<<fac[h];
    return 0;
}
