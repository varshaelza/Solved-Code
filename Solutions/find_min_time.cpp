#include <iostream>
#include<cmath>
using namespace std;

int main() {
	int t,i,j;
	cin>>t;
	for(j=0;j<t;j++)
	{
	    int x,y,N,mn=0;
	    cin>>x>>y>>N;
	    for(i=0;i<=N;i++)
	    {
	        if((mn>max(x*i,y*(N-i)))||mn==0)
	        {
	            mn=max(x*i,y*(N-i));
	        }
	    }
	   cout<<mn<<"\n"; 
	    
	}
	return 0;
}
