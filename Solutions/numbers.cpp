#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,i;
    cin>>a;
    vector<int> r;
    for(i=9;i>1;i--)
    {
        if(a%i==0)
        {
            a=a/i;
            r.push_back(i);
        }
    }
    if(a!=1)
    {
        r.push_back(a);
    }
    if(r.size()==0)
    {
        cout<<"Not possible";
        return 0;
    }
    sort(r.begin(),r.end());
    vector<int>::iterator j;
    for(j=r.begin();j!=r.end();j++)
    {
        cout<<*j;
    }
    return 0;
}
