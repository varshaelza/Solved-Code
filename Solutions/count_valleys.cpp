#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {
    int depth=0,count=0,i;
    for(i=0;i<n;i++)
    {
        if(s.at(i)=='U')
        {
            if(depth==-1)
            {
                count++;
            }
             depth++;
        }
         if(s.at(i)=='D')
        {
            
             depth--;
        }
    }
    return count;


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}
