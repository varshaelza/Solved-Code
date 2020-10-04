#include<iostream>
#include<bits/stdc++.h>
#include<unordered_map>

using namespace std;

int main()
{
    char lat[1000],lon[1000];
    int max=0;
    int min=1001,i,l2;
    cin>>lat>>lon;
    unordered_map<char,int> c;
    unordered_map<char,int> v;
    for(i=0;lat[i+1]!='\0';i++)
    {
        if(c.find(lat[i])==c.end())
        c[lat[i]]=1;
        else
        c[lat[i]]++;
        
        if(c[lat[i]]>max)
        max=c[lat[i]];
    
    
    }
    unordered_map<char,int>::iterator j;
    for(j=c.begin();j!=c.end();j++)
    {
        if(j->second<min)
        min=j->second;
    }
   int l1=max-min;
   char c1=lat[i];
   max=0;
   min=1001;
   for(i=0;lon[i+1]!='\0';i++)
    {
        if(v.find(lon[i])==v.end())
        v[lon[i]]=1;
        else
        v[lon[i]]++;
        
        if(v[lon[i]]>max)
        max=v[lon[i]];
        
    
    }
   for(j=v.begin();j!=v.end();j++)
    {
        if(j->second<min)
        min=j->second;
    }
   l2=max-min;
   char c2=lon[i];
   //cout<<max<<min;
   cout<<l1<<" ";
   if(c1=='s')
   cout<<"South"<<" ";
   else
   cout<<"North"<<" ";
   cout<<l2<<" ";
   if(c2=='w')
   cout<<"West"<<" ";
   else
   cout<<"East"<<" ";
    
    
    return 0;
}
