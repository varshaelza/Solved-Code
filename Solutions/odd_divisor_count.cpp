#include <iostream>
#include<cmath>

using namespace std;

int main() {
    int a, b,c=0;
    double d;
    cin >> a >> b;
  for(int i=a;i<=b;i++)
  {
      d=sqrt(double(i));
      if(floor(d)==d)
      {
          c++;
      }
  }
  cout<<c;
}