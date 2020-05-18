#include <iostream>
#include<cstdlib>

using namespace std;

int main() {
   int left[1000];
   int right[1000];
   
   int a,c=0,i;
   char b;
    int n;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        if(b=='L')
        { 
              if(right[a]>=1)
            {c++;
            right[a]--;
            }
            else
            {
                left[a]++;
            }
        }
         if(b=='R')
        {  
            
            if(left[a]>=1)
            {c++;
            left[a]--;
            }   else
            {
               right[a]++;
            }
        }
    }
    cout<<c;
    
    return 0;
}