// Calculate the hourglass sum for every hourglass in A, then print the maximum hourglass sum.

#include <vector>
#include <iostream>
#include <algorithm>
#define max(a, b) ( (a) > (b) ? (a) : (b))

using namespace std;

int main ()
{
    int maximum=-81;
    vector< vector<int> > arr(6,vector<int>(6));
    for(int i=0; i<6; i++)
    {
        for(int j=0; j<6; j++)
            cin >> arr[i][j];
    }
    
    for (int i = 0;i < 4;i++)
    {
       for(int j = 0;j < 4;j++)
       {
           maximum=max(maximum, 
           arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2]);
       }
    }
    cout << maximum << endl;
    
    return 0;
}