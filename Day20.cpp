/*
	Given an array, a, of size n containing distinct elements a[0], a[1],..., a[n-1], sort array a in ascending order using the Bubble Sort algorithm above. 
	Once sorted, print the following 3 lines:

	Array is sorted in numSwaps swaps where numSwaps is the number of swaps that took place.
    First Element: firstElement where firstElement is the first element in the sorted array.
	Last Element: lastElement where lastElement is the last element in the sorted array.
	
	Hint: To complete this challenge, you will need to add a variable that keeps a running tally of all swaps that occur during execution.
*/

#include <vector>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>


using namespace std;

int main ()
{
    int n;
    cin >> n;
    vector <int> a(n);
    for(int a_i=0; a_i<n; a_i++){
       cin >> a[a_i];
    }
    
    int numSwaps=0;
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n-1; j++)
        {
            if (a[j]>a[j+1])
            {
                swap (a[j], a[j+1]);
                numSwaps++;
            }
        }
        if (numSwaps==0)
            break;
    }
    
    cout << "Array is sorted in " << numSwaps << " swaps." << endl;
    cout << "First Element: " << a[0] << endl;
    cout << "Last Element: " << a[n-1] << endl;
    
    return 0;
}
