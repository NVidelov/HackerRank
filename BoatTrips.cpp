/*
	Week of Code 28
	Day 1

	Alice owns a company that transports tour groups between two islands. She has n trips booked, and each trip i has pi passengers. 
	Alice has m boats for transporting people, and each boat's maximum capacity is c passengers.

	Given the number of passengers going on each trip, determine whether or not Alice can perform all n trips 
	using no more than m boats per individual trip. If this is possible, print Yes; otherwise, print No.
*/

#include <iostream>
#include <vector>

using namespace std;

int main ()
{
    int nTrips;													// Number of trips
    int boatCap;												// Max capacity per boat
    int nBoats;												// Number of boats
    cin >> nTrips >> boatCap >> nBoats;
    vector <int> p(nTrips);
    for(int i=0; i<nTrips; i++)
       cin >> p[i];
    
	int boatTotal=boatCap*nBoats;					// Total capacity per boat
    int maxNum=0;											// Initialize maxNum to 0, update with maxNum in the for loop
    for (int i=0; i<nTrips; i++)
    {
        if (p[i]>maxNum)
            maxNum=p[i];
    }
    if (maxNum>boatTotal)
        cout << "No" << endl;
    else
        cout << "Yes" << endl;
    
    return 0;
}