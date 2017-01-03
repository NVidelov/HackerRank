/*
	Write a factorial function that takes a positive integer, n as a parameter and prints the result of  n!(n factorial).
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int factorial (int n)
{
    if (n<=1)
        return 1;
    else
        return n*factorial(n-1);
}

int main () 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    
    cout << factorial (n) << endl;
    
    return 0;
}