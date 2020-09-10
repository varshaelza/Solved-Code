#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {

long l=s.length(),i=0;
long c=0;
long t=n/l;
if(t!=0)
{
    long aa=0;
    for(i=0;i<l;i++)
    {
        if(s.at(i)=='a')
        {
            aa++;
        }
    }
    c+=aa*t;
    n=n-l*t;
     for(i=0;i<n;i++)
    {
        if(s.at(i)=='a')
        {
            c++;
        }
    }
}
else 
{
    for(i=0;i<n;i++)
    {
        if(s.at(i)=='a')
        {
            c++;
        }
    }
}

return c;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
