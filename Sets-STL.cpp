/*
	1 x:Add an element x to the set.
	2 x:Delete an element x from the set. (If the number x is not present in the set then do nothing).
	3 x:If the number x is present in the set then print "Yes"(without quotes) else print "No"(without quotes).

	Input Format

	The first line of the input contains Q where Q is the number of queries. The next Q lines contain 1 query each. 
	Each query consists of two integers y and x where  is the type of the query and x is an integer.
*/
#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main ()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int numTests;
    cin >> numTests;
    
    set <int> st;           // create a set of integers
    int op, value;
    for (int i=0; i<numTests; ++i) 
    {
        cin >> op >> value;
        switch (op)         
        {
            case 1:
                st.insert (value);
                break;
            case 2:
                st.erase (value);
                break;
            case 3:
                cout << (st.find(value)==st.end() ? "No" : "Yes") << endl;	// returns No if value is not found, Yes if found
        }
            
    }
    return 0;
}