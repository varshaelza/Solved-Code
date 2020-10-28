class Solution {
public:
    string longestPalindrome(string s) {
        int l=s.length();
        int **dp=new int*[l];
        for(int i=0;i<l;i++)
        {
            dp[i]=new int[l];
            
        }
        int mxi=0;
        int mxj=0;
        int max=0,i,j;
        for(i=l-1;i>=0;i--)
        {
            for(j=i;j<l;j++)
            {
                if(i==j)
                {
                    dp[i][j]=1;
                    if(dp[i][j]>max)
                    {
                        mxi=i;
                        mxj=j;max=dp[i][j];
                    }
                }
                else if((s.at(i)-s.at(j)==0)&&i==j-1)
                {
                    dp[i][j]=2;
                    if(dp[i][j]>max)
                    {
                        mxi=i;
                        mxj=j;max=dp[i][j];
                    }
                    
                }
                /*else if((s.at(i)-s.at(j)==0)&&i==j-2)
                {
                    dp[i][j]==3;
                    if(dp[i][j]>max)
                    {
                        mxi=i;
                        mxj=j;max=dp[i][j];
                    }
                }*/
                else if((s.at(i)-s.at(j)==0)&&dp[i+1][j-1]==(j-1)-(i))
                {
                    dp[i][j]=dp[i+1][j-1]+2;
                    if(dp[i][j]>max)
                    {
                        mxi=i;
                        mxj=j;max=dp[i][j];
                    }
                }
                
                
                
            }
        }
        
        string r;
        for(i=mxi;i<=mxj;i++)
        {
            r.push_back(s.at(i));
        }
        
        return r;
    }
};
