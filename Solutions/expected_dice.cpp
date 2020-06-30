#include <iostream>

using namespace std;

int main() {
    int a[6],b[6],prob[2501],big=0,pos=-1,i,j;
    for(i=0;i<6;i++)
    {
        cin>>a[i];
    }
     for(i=0;i<6;i++)
    {
        cin>>b[i];
        for(j=0;j<6;j++)
        {
            prob[a[j]+b[i]]++;
            if( prob[a[j]+b[i]]>big||(prob[a[j]+b[i]]==big&&a[j]+b[i]<pos))
            {
                big= prob[a[j]+b[i]];
                pos=a[j]+b[i];
               
            }
            // cout<<a[j]<<" "<<b[i]<<" "<<prob[a[j]+b[i]]<<" "<<big<<" "<<pos<<"\n";
        }
        
    }
    cout<<pos;
    
    return 0;
}
