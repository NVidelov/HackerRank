/*
	Given a base-10 integer, n, convert it to binary (base-2). Then find and print the base-10 integer denoting the maximum 
	number of consecutive 1's in n's binary representation.
*/

#include <iostream>

using namespace std;

int main ()
{
    int n;
    cin >> n;
    
    int max=0; 
    int count=0;
    
    while (n)
    {
       if (n&1)
           count++;
        else
            count = 0;
        
        if (max<count)
            max = count;
        n>>=1;
    }
    cout << max << endl;
    
    return 0;
}