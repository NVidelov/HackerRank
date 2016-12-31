/* Declare  variables: one of type int, one of type double, and one of type String.
	Read  lines of input from stdin (according to the sequence given in the Input Format section below) and initialize your  variables.
	Use the  operator to perform the following operations: 
	Print the sum of  plus your int variable on a new line.
	Print the sum of  plus your double variable to a scale of one decimal place on a new line.
	Concatenate  with the string you read as input and print the result on a new line. 
*/

#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main () 
{
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
	
	 // Declare second integer, double, and String variables.
    int i2;
    double d2;
    string s2;
    // Read and save an integer, double, and String to your variables.
    cin >> i2;
    cin >> d2;

    if (getline(cin >> ws, s2)) // eat whitespace
    { 
        getline(cin, s2);
    }
    // Print the sum of both integer variables on a new line.
    cout << i+i2 << endl;
    // Print the sum of the double variables on a new line.
    cout << fixed << setprecision(1) << d+d2 << endl; 
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << s+s2 << endl;
	
	return 0;
}
