/*
	The first line of the input contains the number of integers N. The next line contains N integers in sorted order. 
	The next line contains Q, the number of queries. Then Q lines follow each containing a single integer Y.
	If the same number is present multiple times, you have to print the first index at which it occurs.
	The input is such that you always have an answer for each query.
	
	Lower Bound
*/

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main () 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    
    vector <int> v;
	int input;    
    for (int i=0; i<n; i++)
    {
        cin >> input;
        v.push_back (input);
    }
    sort (v.begin(), v.end());
    
    int nTest;
    cin >> nTest;
    
    vector <int>::iterator low;
	int value;
    for (int i=0; i<nTest; i++) 
    {
        cin >> value;
        low = lower_bound (v.begin(), v.end(), value);
        if (v[low-v.begin()]==value)
            cout << "Yes " << (low-v.begin()+1) << endl;
        else
            cout << "No " << (low-v.begin()+1) << endl;
    }
    
    return 0;
}