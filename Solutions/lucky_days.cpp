#include <iostream>

using namespace std;

int main() {
    int n,a,i;
    cin>>n;
    int big=0;
    int c=0;
    for(i=0;i<n;i++)
    {
        cin>>a;
        if(a>big)
        {
            big=a;
            c++;
        }
    }
    cout<<c;
    
    return 0;
}   
