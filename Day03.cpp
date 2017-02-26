/* 
	Given an integer, n, perform the following conditional actions:
	If n is odd, print Weird
	If n is even and in the inclusive range of 2 to 5, print Not Weird
	If n is even and in the inclusive range of 6 to 20, print Weird
	If n is even and greater than 20, print Not Weird
	Complete the stub code provided in your editor to print whether or not n is weird. 
*/

#include <iostream>

using namespace std;

int main () 
{
    int N;
    cin >> N;
    
    if (N%2!=0)
        cout << "Weird" << endl;
    else if (N%2==0 && N>1 && N<6)
        cout << "Not Weird" << endl;
    else if (N%2==0 && N>5 && N<=20)
        cout << "Weird" << endl;
    else 
        cout << "Not Weird" << endl;
    
    return 0;
}