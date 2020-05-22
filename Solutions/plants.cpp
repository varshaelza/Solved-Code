#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    int n ,m,i,j,k;
      cin>>n>>m;
    int *t=new int[101];
    int *c=new int[n];
    int *a[n];
  
    for(i=0;i<m;i++)
    {
        cin>>k;
        t[k]++;
    }
    
    for(i=0;i<n;i++)
    {
        a[i]=new int[n];
        cin>>a[i][0]>>a[i][1];
        for(j=a[i][0];j<=a[i][1];j++)
        {
            c[i]+=t[j];
        }
        cout<<c[i]<<"\n";
    }
}
