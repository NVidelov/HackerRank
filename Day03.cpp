/* 
	Given an integer, n, perform the following conditional actions:
	If n is odd, print Weird
	If n is even and in the inclusive range of  to , print Not Weird
	If n is even and in the inclusive range of  to , print Weird
	If n is even and greater than , print Not Weird
	Complete the stub code provided in your editor to print whether or not n is weird. 
*/

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
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