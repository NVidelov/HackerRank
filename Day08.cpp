/*
	Given n names and phone numbers, assemble a phone book that maps friends' names 
	to their respective phone numbers. You will then be given an unknown number of names to 
	query your phone book for. For each name queried, print the associated entry from 
	your phone book on a new line in the form name=phoneNumber; if an entry for name is not found, print Not found instead.

	Note: Your phone book should be a Dictionary/Map/HashMap data structure.
*/

// I used a HashMap

#include <iostream>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <string>

using namespace std;

int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    
    unordered_map <string, int> m;
    string key;
    int val;
    
    for (int i=0; i<n; i++)
    {
        cin >> key >> val;
        m[key] = val;
    }
    
    string input;
    while (cin >> input)
    {
        unordered_map <string, int>::const_iterator got = m.find (input);
    
        if (got==m.end())
            cout << "Not found" << endl;
        else
            cout << got->first << "=" << got->second << endl;
    }

    return 0;
}