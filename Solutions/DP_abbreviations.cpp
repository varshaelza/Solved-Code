
#include <bits/stdc++.h>
#include<string>
using namespace std;
string abbreviation(string a, string b) {

    int i,j;
    int n1=a.length();
    int n2=b.length();
    bool **dp=new bool*[n1];
    for(i=0;i<=n1;i++)
    {
        dp[i]=new bool[n2];
        for(j=0;j<=n2;j++)
        {
            dp[i][j]=true;
           
            
        }
    }
   

    for(i=1;i<=n1;i++)
    {
        for(j=1;j<=n2;j++)
        {
            char x=a.at(i-1);
            if(toupper(x)==b.at(j-1))
            {
                dp[i][j]=dp[i-1][j-1];
            }
            else if(islower(a.at(i-1)))
            {
                 dp[i][j]=dp[i-1][j];
            }
            else
            {
                dp[i][j]=false;
            }

        }
    }
    if(dp[n1][n2]==true)
    {
        return "YES";
    }
    return  "NO";



}
int main()
{
    string s=abbreviation("daBd","ABC");
    cout<<s;

    return 0;
}
