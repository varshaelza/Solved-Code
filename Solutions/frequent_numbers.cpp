#include <iostream>

using namespace std;

int main() {
    int n,k,i,b,c=0;
    cin>>n>>k;
    int *a=new int[1000];
    for(i=0;i<n;i++)
    {
        cin>>b;
        if(a[b]==k-1)
        {
        c++;}
        a[b]++;
    }
    cout<<c;
}