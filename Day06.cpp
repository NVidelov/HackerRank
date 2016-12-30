#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
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