#include <iostream>

using namespace std;

int main() {
    int i=0;
   char s[100];
   cin>>s;
   char p[26];
   cin>>p;
  while(s[i]!='\0')
  {
      s[i]=p[int(s[i])-97];
      i++;
  }
  cout<<s;
    return 0;
}
