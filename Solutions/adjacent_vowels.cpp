#include <iostream>

using namespace std;

bool isvowel(char a)
{
    switch(a)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':return 1;
        default:return 0;
    }
    return 0;
}

int main() {
    int n,c=0;
    cin>>n;
    char *s=new char[n];
    cin>>s;
    
    for(int i=0;i<n-1;i++)
    {
        if(isvowel(s[i])&&isvowel(s[i+1]))
        {c++;}
    }
    
    cout<<c;
    return 0;
}
