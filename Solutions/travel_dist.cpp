#include <iostream>
#include<cmath>

using namespace std;

int main() {
    char str[1000];
    cin>>str;
    int v=0,h=0,i;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='N')
        {
            v++;
        }
        else if(str[i]=='S')
        {
            v--;
        }
         else if(str[i]=='E')
        {
            h++;
        }
         else if(str[i]=='W')
        {
            h--;
        }
    }
    cout<<abs(v)+abs(h);
    
}
