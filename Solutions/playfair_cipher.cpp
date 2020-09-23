#include <bits/stdc++.h>
#include<unordered_map>
#include<cstring>
#include<iostream>
using namespace std;

void pair_text(char text[100])
{
    int k=0;
    char update[200];
    for(int i=0;text[i]!='\0';i++)
    {
        
        update[k++]=text[i];
        if(strlen(text)==i+1)
        update[k++]='X';
        else if(text[i+1]==text[i])
        {
            update[k++]='X';
        }
        else
        {
            update[k++]=text[i+1];
            i++;
        }
        
        
    }
        update[k]='\0';
        
        strcpy(text,update);
       
        return;
}
void findlocation(char a,char b,char matrix[5][5],int *r1,int *c1,int *r2,int *c2)
{
    int i,j,c=0;
   for(i=0;i<5;i++)
   {
       for(j=0;j<5;j++)
       {
           if(matrix[i][j]==a)
           {
               *r1=i;
               *c1=j;
               c++;
               if(c==2)
               return;
           }
           else if(matrix[i][j]==b)
           {
               *r2=i;
               *c2=j;
               c++;
               if(c==2)
               return;
           }
       }
       
   }
   
   return;
    
}
int main() {
    
    char key[20];
    cout<<"KEY : ";
    cin>>key;
    
    char matrix[5][5];
    unordered_map<char,int> m;
    int k=0,l=0,i;
    for(i=0;key[i]!='\0';i++)
    {
        if(key[i]=='I'&& m.find('I')==m.end()&&m.find('J')==m.end())
        {
            matrix[k][l]='I';
            l=(l+1)%5;
            if(l==0)
            {
                k=k+1;
            }
            m['I']=1;
            m['J']=1;
        }
        else if(key[i]=='J'&& m.find('I')==m.end()&&m.find('J')==m.end())
        {
            matrix[k][l]='I';
            l=(l+1)%5;
            if(l==0)
             {
                k=k+1;
             }
            m['I']=1;
            m['J']=1;
        }
        else if(m.find(key[i])==m.end())
         {
           
            matrix[k][l]=key[i];
            l=(l+1)%5;
            if(l==0)
             {
                k=k+1;
            }
            
            m[key[i]]=1;
            ;
        }
        
        
    }
    
  
    
    for(i=65;i<=90;i++)
    {
         if(char(i)=='I'&& m.find('I')==m.end()&&m.find('J')==m.end())
        {
            matrix[k][l]='I';
            l=(l+1)%5;
            if(l==0)
             {
                k=k+1;
             }
            m['I']=1;
            m['J']=1;
        }
        else if(char(i)=='J'&& m.find('I')==m.end()&&m.find('J')==m.end())
        {
            matrix[k][l]='I';
            l=(l+1)%5;
            if(l==0)
            {
                k=k+1;
            }
            m['I']=1;
            m['J']=1;
        }
        else if(m.find(char(i))==m.end())
         {
            matrix[k][l]=char(i);
            l=(l+1)%5;
            if(l==0)
            {
                 k=k+1;
             }
            m[char(i)]=1;
            
        }
         
        if(k==5)
        {
            break;
        }
        
    }
    cout<<"PLAYFAIR MATRIX : \n";
    for(i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    char text[100];
    char a,b;
    cout<<"PLAINTEXT : ";
    cin>>text;
    char cipher[100];
    k=0;
    
    pair_text(text);
    
    cout<<"PLAINTEXT (PAIRING) : ";
    for(i=0;text[i]!='\0';i=i+2)
    {
         cout<<text[i]<<text[i+1]<<" ";
          a=text[i];
            b=text[i+1];
        
        int r1=0,c1=0,r2=0,c2=0;
        findlocation(a,b,matrix,&r1,&c1,&r2,&c2);
       
        if(r1==r2)
        {
            cipher[k++]=matrix[r1][(c1+1)%5];
            cipher[k++]=matrix[r2][(c2+1)%5];
        }
        else if(c1==c2)
        {
            cipher[k++]=matrix[(r1+1)%5][c1];
            cipher[k++]=matrix[(r2+1)%5][c2];
        }
        else
        {
            cipher[k++]=matrix[r1][c2];
            cipher[k++]=matrix[r2][c1];
        }
        
        
        
    }
    cipher[k]='\0';
    
    
    cout<<"\nCIPHERTEXT : "<<cipher;

    return 0;
}
