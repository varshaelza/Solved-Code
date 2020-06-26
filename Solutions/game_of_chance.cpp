#include <iostream>

using namespace std;

int main() {
    int n,a,b,w,i;
    cin>>n>>a>>b;
    for(i=0;i<n;i++)
    {
            cin>>w;
            if(w==1)
                a+=1;
            else
                a-=1;
    }
    for(i=0;i<n;i++)
    {
            cin>>w;
            if(w==1)
                b+=1;
            else
                b-=1;
        
    }
    if(a>b)
    {
        cout<<1;
    }
    else if(b>a)
    {
        cout<<2;
    }
    else
    {
        cout<<0;
    }
    return 0;
}
