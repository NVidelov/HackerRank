/*
	Read a string, S, and print its integer value; if S cannot be converted to an integer, print Bad String.

	Note: You must use the String-to-Integer and exception handling constructs built into your submission language. 
	If you attempt to use loops/conditional statements, you will get a 0 score.
*/

#include <string>
#include <iostream>

using namespace std;

int main ()
{
    string S;
    cin >> S;
    
    try 
    {
        int num = stoi (S);
        cout << num << endl;
    }
    catch (invalid_argument e)
    {
        cout << "Bad String" << endl;
    }
    
    return 0;
}