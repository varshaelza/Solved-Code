#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int a[]={50,40,20,60,30};
    int max=0,d,i;
    int area;
    vector <int> s;
    s.push_back(0);
    for(i=1;i<5;i++)
    {
        while(!s.empty()&&a[s.back()]>a[i])
        {
            d=s.back();
            s.pop_back();
        }
        area=a[d]*(s.empty()?i:i-s.back()-1);
        s.push_back(i);
        if(max<area)
        max=area;
    }
    while(!s.empty())
    {
        d=s.back();
        s.pop_back();
        area=a[d]*(s.empty()?i:i-s.back()-1);
        if(max<area)
        max=area;
    }
    cout<<max;
}
