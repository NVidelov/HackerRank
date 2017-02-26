/*
	Given an array, A, of N integers, print A's elements in reverse order as a 
	single line of space-separated numbers.
*/
#include <vector>
#include <iostream>

using namespace std;

int main ()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i=0; arr_i<n; arr_i++){
       cin >> arr[arr_i];
    }
    for (int i=n-1; i>=0; i--)
        cout << arr[i] << " ";
    
	return 0;
}