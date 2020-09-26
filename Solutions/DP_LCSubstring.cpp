
#include <bits/stdc++.h>
#include<string>
using namespace std;
int LCSeq(string a, string b) {

    int i,j,maxi=0;
    int n1=a.length();
    int n2=b.length();
    int **dp=new int*[n1];
    for(i=0;i<=n1;i++)
    {
        dp[i]=new int[n2];
        for(j=0;j<=n2;j++)
        {
            dp[i][j]=0;
           
            
        }
    }
   

    for(i=1;i<=n1;i++)
    {
        for(j=1;j<=n2;j++)
        {
            if(a.at(i-1)==b.at(j-1))
            {
                dp[i][j]=1+dp[i-1][j-1];
            }
           
            maxi=max(dp[i][j],maxi);
        }
    }
    return maxi;



}
int main()
{
    int s=LCSeq("dAaBd","ABC");
    cout<<s;

    return 0;
}
