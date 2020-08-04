#include <iostream>
using namespace std;

int main() {
    int t,n,m,i,j,k,x;
    cin>>t;
    for(i=0;i<t;i++)
    {
        
        cin>>n>>m;
        int **a=new int*[n];
        for(j=0;j<n;j++)
        {   
            a[j]=new int[m];
            for(k=0;k<m;k++)
        {
            cin>>a[j][k];
        }
        
        }
        cin>>x;
        int f=0;
        for(j=0;f==0&&j<n;j++)
        {
            if(x>=a[j][0]&&x<=a[j][m-1])
           { int beg=0;
            int end=m-1;
               while(beg<=end)
            {
            
            int mid=(beg+end)/2;
            if(a[j][mid]>x)
            end=mid-1;
            else if(a[j][mid]<x)
            beg=mid+1;
            else
            {
                cout<<1<<"\n";
                f=1;
                break;
                
            }
            
            
            }
           }
            
        }
        
        if(f==0)
        {
            cout<<0<<"\n";
        }
    }
	return 0;
}
