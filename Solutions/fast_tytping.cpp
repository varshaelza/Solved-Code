#include <iostream>

using namespace std;

int main() {
    char s[100];
    int v[26],sum=0,i;
    cin>>s;
    for(i=0;i<26;i++)
    {
        cin>>v[i];
    }
    for(i=0;s[i]!='\0';i++)
    {
        sum+=v[s[i]-97]; 
    }
    cout<<sum;
    return 0;
}
