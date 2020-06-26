#include <iostream>
#include<algorithm>
#include<cstring>

using namespace std;

int main() {
    int n,k=0,i;
    cin>>n;
    char *s=new char[100000];
    char *res=new char[n];
    for(i=0;i<n;i++)
    {
      
        cin>>s;
        sort(s,s+strlen(s));
        res[k]=s[0];
        k++;
        s[0]='\0';
       //cout<<res<<"\n";
        
    }
    res[k]='\0';
    
    sort(res,res+n);
    cout<<res;
    
    
    
    return 0;
}
