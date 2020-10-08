#include<iostream>

using namespace std;
int touch(int **city,int r,int c,int i,int j)
{
    city[i][j]=0;
    int count=1;
    if(i-1>=0&&j-1>=0&&city[i-1][j-1]==1)
    {
        count+=touch(city,r,c,i-1,j-1);       
    }
    if(i-1>=0&&city[i-1][j]==1)
    {
        count+=touch(city,r,c,i-1,j);
    }
    if(i-1>=0&&j+1<c&&city[i-1][j+1]==1)
    {
        count+=touch(city,r,c,i-1,j+1);
    }
    if(j-1>=0&&city[i][j-1]==1)
    {
        count+=touch(city,r,c,i,j-1);
    }
    if((j+1)<c&&city[i][j+1]==1)
    {
        count+=touch(city,r,c,i,j+1);
    }
    if(i+1<r&&j-1>=0&&city[i+1][j-1]==1)
    {
        count+=touch(city,r,c,i+1,j-1);
    }
     if(i+1<r&&city[i+1][j]==1)
    {
        count+=touch(city,r,c,i+1,j);
    }
     if(i+1<r&&j+1<c&&city[i+1][j+1]==1)
    {
        count+=touch(city,r,c,i+1,j+1);
    }
    
    return count;
    
    
}

int main()
{
    int r,c,i,j;
    cin>>r>>c;
    int **city=new int*[r];
    for(i=0;i<r;i++)
    {
        city[i]=new int[c];
        for(j=0;j<c;j++)
        {
            cin>>city[i][j];
        }
    }
    int maxi=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            int d=0;
            if(city[i][j]==1)
            {
                //cout<<"lllll";
                d=touch(city,r,c,i,j);
                if(d>maxi)
                {
                    
                    maxi=d;
                }
            }
        }
    }
    
    cout<<maxi;
    
    
    return 0;
}
