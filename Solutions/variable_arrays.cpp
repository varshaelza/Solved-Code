#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,q;
    cin>>n>>q;
    int *a[n];
    int *que[q];
    int l,i,j;
    for(i=0;i<n;i++)
    {   
        cin>>l;
        a[i]=new int[l];
        for(j=0;j<l;j++)
        {
            cin>>a[i][j];
        }
    } 

    for(i=0;i<q;i++)
    {
        que[i]=new int[2];
        cin>>que[i][0]>>que[i][1];

    }
    for(i=0;i<q;i++)
    {
        cout<<a[que[i][0]][que[i][1]]<<"\n";
    }
    
    return 0;
}
