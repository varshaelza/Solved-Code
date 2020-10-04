#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,r,a,i;
    long sumi=0,sumo=0;
    cin>>n>>m>>r;
    for(i=0;i<n;i++)
    {
        cin>>a;
        sumi+=(a-r);
    }
    for(i=0;i<m;i++)
    {
        cin>>a;
        sumo+=(a-r);
    }
    if((sumo-sumi)==0)
    {
        cout<<"BALANCED";
    }
    else
    {
        if(sumo-sumi>0)
        cout<<sumo-sumi+r;
        else 
        cout<<sumo-sumi-r;
    }
   
    
    
    return 0;
}
