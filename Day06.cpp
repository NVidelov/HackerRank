/* Given a string, S, of length N that is indexed from 0 to N - 1, 
	print its even-indexed and odd-indexed characters as 2 space-separated 
	strings on a single line (see the Sample below for more detail). 
*/

#include <iostream>
#include <string>

using namespace std;

int main () 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int N;
    cin >> N;
    
    for (int i=0; i<N; i++)
    {
        string S;
        string str1, str2;
        cin >> S;
        for (int j=0; j<S.length(); j++)
        {
            if (j==0 || j%2==0)
                str1 += S[j];
            else
                str2 += S[j];
        }
        cout << str1 << " " << str2 << endl;
    }
    
	return 0;
}