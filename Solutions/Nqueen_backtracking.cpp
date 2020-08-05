#include <iostream>
#include<vector>
using namespace std;
void printmatrix(int **a,int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[i][j]<< " ";
        }
        cout<<"\n";
    }
}
int safe(int **a,int i,int c,int n)
{
    int j;
    if(i>=0 &&i<n&&c>=0&&c<n)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]==1)
            {
                return 0;
            }
            
        }
        return 1;
    }
    return 0;
}
int nqueen(int **a,int c,int n)
{
    int i;
    if(c>=n)
    {
        return 1;
    }
    for(i=0;i<n;i++)
    {
        if(safe(a,i,c,n))
        {
            a[i][c]=1;
            if(nqueen(a,c+1,n)==1)
            {
                return 1;
            }
            a[i][c]=0;
        }
    }
    return 0;
}

int main()
{
    int n,i;
    cin>>n;
    cout<<"\n";
    int **a=new int*[n];
    for(i=0;i<n;i++)
    {
        a[i]=new int[n];
    }
    
    if(nqueen(a,0,n)==1)
    {
        printmatrix(a,n);
    }
    else
    {
        cout<<"\nNo Solution";
    }
}
