#include <iostream>

using namespace std;

int main() {
    int n,m,x,y,e=0;
    cin>>n>>m>>x>>y;
    while(n>0)
    {
        if(m>=x)
        {  
            m-=x;
            n-=1;
            e+=1;
        }
        else
        {
            n-=1;
            m+=y;
        }
    }
    cout<<e;
}
