#include <iostream>

using namespace std;

int main() {
    int n,sub=0,k,sum=0;
    int *a=new int[1000];
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        cin>>k;
        sum+=k;
        a[k]++;
        if(sub<k*a[k])
        {
            sub=k*a[k];
        }
    }
    cout<<sum-sub;
    return 0;
}
