 /* 
	Given an integer, n, print its first 10 multiples. Each multiple n x i (where 1 <= i <= 10) 
	should be printed on a new line in the form: n x i = result. 
*/

#include <iostream>

using namespace std;

int main ()
{
    int n;
    cin >> n;
    
    int result;
    
    for (int i=1; i<11; i++)
    {
        result = n*i;
        cout << n << " x " << i << " = " << result <<endl;    
    }
        
    return 0;
}
