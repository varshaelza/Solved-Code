using namespace std;

int main() {
	int t,n,m,i,j,k;
	cin>>t;
	for(i=0;i<t;i++)
	{
	    cin>>n>>m;
	    int **a=new int*[n];
	    for(j=0;j<n;j++)
	    {
	        a[j]=new int[m];
	        for(k=0;k<m;k++)
	        {
	            cin>>a[j][k];
	        }
	    }
	    
	    int r1=0;
	    int r2=n-1;
	    int c1=0;
	    int c2=m-1;
	    int c=0;
	    while(c<n*m)
	    {
	        for(j=c1;j<=c2;j++)
	        {
	            if(a[r1][j]!=-1)
	            {cout<<a[r1][j]<<" ";
	            a[r1][j]=-1;
	            c++;}
	            
	        }
	        r1++;
	        for(j=r1;j<=r2;j++)
	        {
	            if(a[j][c2]!=-1)
	            {cout<<a[j][c2]<<" ";
	            c++;
	            a[j][c2]=-1;}
	           
	        }
	         c2--;
	        for(j=c2;j>=c1;j--)
	        {
	            if(a[r2][j]!=-1)
	            {c++;
	            cout<<a[r2][j]<<" ";
	           a[r2][j]=-1;}
	        }
	         r2--;
	        for(j=r2;j>=r1;j--)
	        {
	            if(a[j][c1]!=-1)
	            {c++;
	            cout<<a[j][c1]<<" ";
	            a[j][c1]=-1;
	            }
	            
	        }
	        c1++;
	    }
	    cout<<"\n";
	}
	return 0;
}
